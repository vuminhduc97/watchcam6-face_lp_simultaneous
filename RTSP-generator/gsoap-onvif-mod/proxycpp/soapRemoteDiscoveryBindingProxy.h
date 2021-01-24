/* soapRemoteDiscoveryBindingProxy.h
   Generated by gSOAP 2.8.17r from onvif.h

Copyright(C) 2000-2013, Robert van Engelen, Genivia Inc. All Rights Reserved.
The generated code is released under one of the following licenses:
GPL or Genivia's license for commercial use.
This program is released under the GPL with the additional exemption that
compiling, linking, and/or using OpenSSL is allowed.
*/

#ifndef soapRemoteDiscoveryBindingProxy_H
#define soapRemoteDiscoveryBindingProxy_H
#include "../soapH.h"

class SOAP_CMAC RemoteDiscoveryBindingProxy
{ public:
	struct soap *soap;
	bool own;
	/// Endpoint URL of service 'RemoteDiscoveryBindingProxy' (change as needed)
	const char *soap_endpoint;
	/// Constructor
	RemoteDiscoveryBindingProxy();
	/// Constructor to use/share an engine state
	RemoteDiscoveryBindingProxy(struct soap*);
	/// Constructor with endpoint URL
	RemoteDiscoveryBindingProxy(const char *url);
	/// Constructor with engine input+output mode control
	RemoteDiscoveryBindingProxy(soap_mode iomode);
	/// Constructor with URL and input+output mode control
	RemoteDiscoveryBindingProxy(const char *url, soap_mode iomode);
	/// Constructor with engine input and output mode control
	RemoteDiscoveryBindingProxy(soap_mode imode, soap_mode omode);
	/// Destructor frees deserialized data
	virtual	~RemoteDiscoveryBindingProxy();
	/// Initializer used by constructors
	virtual	void RemoteDiscoveryBindingProxy_init(soap_mode imode, soap_mode omode);
	/// Delete all deserialized data (with soap_destroy and soap_end)
	virtual	void destroy();
	/// Delete all deserialized data and reset to default
	virtual	void reset();
	/// Disables and removes SOAP Header from message
	virtual	void soap_noheader();
	/// Put SOAP Header in message
	virtual	void soap_header(char *wsa__MessageID, struct wsa__Relationship *wsa__RelatesTo, struct wsa__EndpointReferenceType *wsa__From, struct wsa__EndpointReferenceType *wsa__ReplyTo, struct wsa__EndpointReferenceType *wsa__FaultTo, char *wsa__To, char *wsa__Action, struct wsdd__AppSequenceType *wsdd__AppSequence, char *wsa5__MessageID, struct wsa5__RelatesToType *wsa5__RelatesTo, struct wsa5__EndpointReferenceType *wsa5__From, struct wsa5__EndpointReferenceType *wsa5__ReplyTo, struct wsa5__EndpointReferenceType *wsa5__FaultTo, char *wsa5__To, char *wsa5__Action, struct chan__ChannelInstanceType *chan__ChannelInstance, struct wsrm__SequenceType *wsrm__Sequence, int __sizeAckRequested, struct wsrm__AckRequestedType *wsrm__AckRequested, int __sizeSequenceAcknowledgement, struct _wsrm__SequenceAcknowledgement *wsrm__SequenceAcknowledgement, struct wsrm__SequenceFaultType *wsrm__SequenceFault, struct _wsse__Security *wsse__Security);
	/// Get SOAP Header structure (NULL when absent)
	virtual	const SOAP_ENV__Header *soap_header();
	/// Get SOAP Fault structure (NULL when absent)
	/*virtual	const SOAP_ENV__Fault *soap_fault();*/  
	/// Get SOAP Fault string (NULL when absent)
	virtual	const char *soap_fault_string();
	/// Get SOAP Fault detail as string (NULL when absent)
	virtual	const char *soap_fault_detail();
	/// Close connection (normally automatic, except for send_X ops)
	virtual	int soap_close_socket();
	/// Force close connection (can kill a thread blocked on IO)
	virtual	int soap_force_close_socket();
	/// Print fault
	virtual	void soap_print_fault(FILE*);
#ifndef WITH_LEAN
	/// Print fault to stream
#ifndef WITH_COMPAT
	virtual	void soap_stream_fault(std::ostream&);
#endif

	/// Put fault into buffer
	virtual	char *soap_sprint_fault(char *buf, size_t len);
#endif

	/// Web service operation 'Hello' (returns error code or SOAP_OK)
	virtual	int Hello(struct wsdd__HelloType tdn__Hello, struct wsdd__ResolveType &tdn__HelloResponse) { return this->Hello(NULL, NULL, tdn__Hello, tdn__HelloResponse); }
	virtual	int Hello(const char *endpoint, const char *soap_action, struct wsdd__HelloType tdn__Hello, struct wsdd__ResolveType &tdn__HelloResponse);

	/// Web service operation 'Bye' (returns error code or SOAP_OK)
	virtual	int Bye(struct wsdd__ByeType tdn__Bye, struct wsdd__ResolveType &tdn__ByeResponse) { return this->Bye(NULL, NULL, tdn__Bye, tdn__ByeResponse); }
	virtual	int Bye(const char *endpoint, const char *soap_action, struct wsdd__ByeType tdn__Bye, struct wsdd__ResolveType &tdn__ByeResponse);

	/// Web service operation 'Probe' (returns error code or SOAP_OK)
	virtual	int Probe(struct wsdd__ProbeType tdn__Probe, struct wsdd__ProbeMatchesType &tdn__ProbeResponse) { return this->Probe(NULL, NULL, tdn__Probe, tdn__ProbeResponse); }
	virtual	int Probe(const char *endpoint, const char *soap_action, struct wsdd__ProbeType tdn__Probe, struct wsdd__ProbeMatchesType &tdn__ProbeResponse);
};
#endif
