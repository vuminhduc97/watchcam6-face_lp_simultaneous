/* soapwsrmProxy.h
   Generated by gSOAP 2.8.17r from onvif.h

Copyright(C) 2000-2013, Robert van Engelen, Genivia Inc. All Rights Reserved.
The generated code is released under one of the following licenses:
GPL or Genivia's license for commercial use.
This program is released under the GPL with the additional exemption that
compiling, linking, and/or using OpenSSL is allowed.
*/

#ifndef soapwsrmProxy_H
#define soapwsrmProxy_H
#include "../soapH.h"

class SOAP_CMAC wsrmProxy
{ public:
	struct soap *soap;
	bool own;
	/// Endpoint URL of service 'wsrmProxy' (change as needed)
	const char *soap_endpoint;
	/// Constructor
	wsrmProxy();
	/// Constructor to use/share an engine state
	wsrmProxy(struct soap*);
	/// Constructor with endpoint URL
	wsrmProxy(const char *url);
	/// Constructor with engine input+output mode control
	wsrmProxy(soap_mode iomode);
	/// Constructor with URL and input+output mode control
	wsrmProxy(const char *url, soap_mode iomode);
	/// Constructor with engine input and output mode control
	wsrmProxy(soap_mode imode, soap_mode omode);
	/// Destructor frees deserialized data
	virtual	~wsrmProxy();
	/// Initializer used by constructors
	virtual	void wsrmProxy_init(soap_mode imode, soap_mode omode);
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
//	virtual	const SOAP_ENV__Fault *soap_fault();
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

	/// Web service operation 'CreateSequence' (returns error code or SOAP_OK)
	virtual	int CreateSequence(struct wsrm__CreateSequenceType *wsrm__CreateSequence, struct wsrm__CreateSequenceResponseType *wsrm__CreateSequenceResponse) { return this->CreateSequence(NULL, NULL, wsrm__CreateSequence, wsrm__CreateSequenceResponse); }
	virtual	int CreateSequence(const char *endpoint, const char *soap_action, struct wsrm__CreateSequenceType *wsrm__CreateSequence, struct wsrm__CreateSequenceResponseType *wsrm__CreateSequenceResponse);

	/// Web service operation 'CloseSequence' (returns error code or SOAP_OK)
	virtual	int CloseSequence(struct wsrm__CloseSequenceType *wsrm__CloseSequence, struct wsrm__CloseSequenceResponseType *wsrm__CloseSequenceResponse) { return this->CloseSequence(NULL, NULL, wsrm__CloseSequence, wsrm__CloseSequenceResponse); }
	virtual	int CloseSequence(const char *endpoint, const char *soap_action, struct wsrm__CloseSequenceType *wsrm__CloseSequence, struct wsrm__CloseSequenceResponseType *wsrm__CloseSequenceResponse);

	/// Web service operation 'TerminateSequence' (returns error code or SOAP_OK)
	virtual	int TerminateSequence(struct wsrm__TerminateSequenceType *wsrm__TerminateSequence, struct wsrm__TerminateSequenceResponseType *wsrm__TerminateSequenceResponse) { return this->TerminateSequence(NULL, NULL, wsrm__TerminateSequence, wsrm__TerminateSequenceResponse); }
	virtual	int TerminateSequence(const char *endpoint, const char *soap_action, struct wsrm__TerminateSequenceType *wsrm__TerminateSequence, struct wsrm__TerminateSequenceResponseType *wsrm__TerminateSequenceResponse);

	/// Web service one-way send operation 'send_CreateSequenceResponse' (returns error code or SOAP_OK)
	virtual	int send_CreateSequenceResponse(struct wsrm__CreateSequenceResponseType *wsrm__CreateSequenceResponse) { return this->send_CreateSequenceResponse(NULL, NULL, wsrm__CreateSequenceResponse); }
	virtual	int send_CreateSequenceResponse(const char *endpoint, const char *soap_action, struct wsrm__CreateSequenceResponseType *wsrm__CreateSequenceResponse);
	/// Web service one-way receive operation 'recv_CreateSequenceResponse' (returns error code or SOAP_OK);
	virtual	int recv_CreateSequenceResponse(struct __wsrm__CreateSequenceResponse&);
	/// Web service receive of HTTP Accept acknowledgment for one-way send operation 'send_CreateSequenceResponse' (returns error code or SOAP_OK)
	virtual	int recv_CreateSequenceResponse_empty_response() { return soap_recv_empty_response(this->soap); }
	/// Web service one-way synchronous send operation 'CreateSequenceResponse' with HTTP Accept/OK response receive (returns error code or SOAP_OK)
	virtual	int CreateSequenceResponse(struct wsrm__CreateSequenceResponseType *wsrm__CreateSequenceResponse) { return this->CreateSequenceResponse(NULL, NULL, wsrm__CreateSequenceResponse); }
	virtual	int CreateSequenceResponse(const char *endpoint, const char *soap_action, struct wsrm__CreateSequenceResponseType *wsrm__CreateSequenceResponse) { if (this->send_CreateSequenceResponse(endpoint, soap_action, wsrm__CreateSequenceResponse) || soap_recv_empty_response(this->soap)) return this->soap->error; return SOAP_OK; }

	/// Web service one-way send operation 'send_CloseSequenceResponse' (returns error code or SOAP_OK)
	virtual	int send_CloseSequenceResponse(struct wsrm__CloseSequenceResponseType *wsrm__CloseSequenceResponse) { return this->send_CloseSequenceResponse(NULL, NULL, wsrm__CloseSequenceResponse); }
	virtual	int send_CloseSequenceResponse(const char *endpoint, const char *soap_action, struct wsrm__CloseSequenceResponseType *wsrm__CloseSequenceResponse);
	/// Web service one-way receive operation 'recv_CloseSequenceResponse' (returns error code or SOAP_OK);
	virtual	int recv_CloseSequenceResponse(struct __wsrm__CloseSequenceResponse&);
	/// Web service receive of HTTP Accept acknowledgment for one-way send operation 'send_CloseSequenceResponse' (returns error code or SOAP_OK)
	virtual	int recv_CloseSequenceResponse_empty_response() { return soap_recv_empty_response(this->soap); }
	/// Web service one-way synchronous send operation 'CloseSequenceResponse' with HTTP Accept/OK response receive (returns error code or SOAP_OK)
	virtual	int CloseSequenceResponse(struct wsrm__CloseSequenceResponseType *wsrm__CloseSequenceResponse) { return this->CloseSequenceResponse(NULL, NULL, wsrm__CloseSequenceResponse); }
	virtual	int CloseSequenceResponse(const char *endpoint, const char *soap_action, struct wsrm__CloseSequenceResponseType *wsrm__CloseSequenceResponse) { if (this->send_CloseSequenceResponse(endpoint, soap_action, wsrm__CloseSequenceResponse) || soap_recv_empty_response(this->soap)) return this->soap->error; return SOAP_OK; }

	/// Web service one-way send operation 'send_TerminateSequenceResponse' (returns error code or SOAP_OK)
	virtual	int send_TerminateSequenceResponse(struct wsrm__TerminateSequenceResponseType *wsrm__TerminateSequenceResponse) { return this->send_TerminateSequenceResponse(NULL, NULL, wsrm__TerminateSequenceResponse); }
	virtual	int send_TerminateSequenceResponse(const char *endpoint, const char *soap_action, struct wsrm__TerminateSequenceResponseType *wsrm__TerminateSequenceResponse);
	/// Web service one-way receive operation 'recv_TerminateSequenceResponse' (returns error code or SOAP_OK);
	virtual	int recv_TerminateSequenceResponse(struct __wsrm__TerminateSequenceResponse&);
	/// Web service receive of HTTP Accept acknowledgment for one-way send operation 'send_TerminateSequenceResponse' (returns error code or SOAP_OK)
	virtual	int recv_TerminateSequenceResponse_empty_response() { return soap_recv_empty_response(this->soap); }
	/// Web service one-way synchronous send operation 'TerminateSequenceResponse' with HTTP Accept/OK response receive (returns error code or SOAP_OK)
	virtual	int TerminateSequenceResponse(struct wsrm__TerminateSequenceResponseType *wsrm__TerminateSequenceResponse) { return this->TerminateSequenceResponse(NULL, NULL, wsrm__TerminateSequenceResponse); }
	virtual	int TerminateSequenceResponse(const char *endpoint, const char *soap_action, struct wsrm__TerminateSequenceResponseType *wsrm__TerminateSequenceResponse) { if (this->send_TerminateSequenceResponse(endpoint, soap_action, wsrm__TerminateSequenceResponse) || soap_recv_empty_response(this->soap)) return this->soap->error; return SOAP_OK; }

	/// Web service one-way send operation 'send_SequenceAcknowledgement' (returns error code or SOAP_OK)
	virtual	int send_SequenceAcknowledgement() { return this->send_SequenceAcknowledgement(NULL, NULL); }
	virtual	int send_SequenceAcknowledgement(const char *endpoint, const char *soap_action);
	/// Web service one-way receive operation 'recv_SequenceAcknowledgement' (returns error code or SOAP_OK);
	virtual	int recv_SequenceAcknowledgement(struct __wsrm__SequenceAcknowledgement&);
	/// Web service receive of HTTP Accept acknowledgment for one-way send operation 'send_SequenceAcknowledgement' (returns error code or SOAP_OK)
	virtual	int recv_SequenceAcknowledgement_empty_response() { return soap_recv_empty_response(this->soap); }
	/// Web service one-way synchronous send operation 'SequenceAcknowledgement' with HTTP Accept/OK response receive (returns error code or SOAP_OK)
	virtual	int SequenceAcknowledgement() { return this->SequenceAcknowledgement(NULL, NULL); }
	virtual	int SequenceAcknowledgement(const char *endpoint, const char *soap_action) { if (this->send_SequenceAcknowledgement(endpoint, soap_action) || soap_recv_empty_response(this->soap)) return this->soap->error; return SOAP_OK; }

	/// Web service one-way send operation 'send_AckRequested' (returns error code or SOAP_OK)
	virtual	int send_AckRequested() { return this->send_AckRequested(NULL, NULL); }
	virtual	int send_AckRequested(const char *endpoint, const char *soap_action);
	/// Web service one-way receive operation 'recv_AckRequested' (returns error code or SOAP_OK);
	virtual	int recv_AckRequested(struct __wsrm__AckRequested&);
	/// Web service receive of HTTP Accept acknowledgment for one-way send operation 'send_AckRequested' (returns error code or SOAP_OK)
	virtual	int recv_AckRequested_empty_response() { return soap_recv_empty_response(this->soap); }
	/// Web service one-way synchronous send operation 'AckRequested' with HTTP Accept/OK response receive (returns error code or SOAP_OK)
	virtual	int AckRequested() { return this->AckRequested(NULL, NULL); }
	virtual	int AckRequested(const char *endpoint, const char *soap_action) { if (this->send_AckRequested(endpoint, soap_action) || soap_recv_empty_response(this->soap)) return this->soap->error; return SOAP_OK; }
};
#endif
