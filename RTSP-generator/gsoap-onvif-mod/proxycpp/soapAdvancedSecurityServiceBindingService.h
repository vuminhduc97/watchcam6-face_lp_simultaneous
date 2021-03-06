/* soapAdvancedSecurityServiceBindingService.h
   Generated by gSOAP 2.8.17r from onvif.h

Copyright(C) 2000-2013, Robert van Engelen, Genivia Inc. All Rights Reserved.
The generated code is released under one of the following licenses:
GPL or Genivia's license for commercial use.
This program is released under the GPL with the additional exemption that
compiling, linking, and/or using OpenSSL is allowed.
*/

#ifndef soapAdvancedSecurityServiceBindingService_H
#define soapAdvancedSecurityServiceBindingService_H
#include "../soapH.h"
class SOAP_CMAC AdvancedSecurityServiceBindingService
{ public:
	struct soap *soap;
	bool own;
	/// Constructor
	AdvancedSecurityServiceBindingService();
	/// Constructor to use/share an engine state
	AdvancedSecurityServiceBindingService(struct soap*);
	/// Constructor with engine input+output mode control
	AdvancedSecurityServiceBindingService(soap_mode iomode);
	/// Constructor with engine input and output mode control
	AdvancedSecurityServiceBindingService(soap_mode imode, soap_mode omode);
	/// Destructor, also frees all deserialized data
	virtual ~AdvancedSecurityServiceBindingService();
	/// Delete all deserialized data (with soap_destroy and soap_end)
	virtual	void destroy();
	/// Delete all deserialized data and reset to defaults
	virtual	void reset();
	/// Initializer used by constructor
	virtual	void AdvancedSecurityServiceBindingService_init(soap_mode imode, soap_mode omode);
	/// Create a copy
	virtual	AdvancedSecurityServiceBindingService *copy() SOAP_PURE_VIRTUAL;
	/// Close connection (normally automatic)
	virtual	int soap_close_socket();
	/// Force close connection (can kill a thread blocked on IO)
	virtual	int soap_force_close_socket();
	/// Return sender-related fault to sender
	virtual	int soap_senderfault(const char *string, const char *detailXML);
	/// Return sender-related fault with SOAP 1.2 subcode to sender
	virtual	int soap_senderfault(const char *subcodeQName, const char *string, const char *detailXML);
	/// Return receiver-related fault to sender
	virtual	int soap_receiverfault(const char *string, const char *detailXML);
	/// Return receiver-related fault with SOAP 1.2 subcode to sender
	virtual	int soap_receiverfault(const char *subcodeQName, const char *string, const char *detailXML);
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
	/// Disables and removes SOAP Header from message
	virtual	void soap_noheader();
	/// Put SOAP Header in message
	virtual	void soap_header(char *wsa__MessageID, struct wsa__Relationship *wsa__RelatesTo, struct wsa__EndpointReferenceType *wsa__From, struct wsa__EndpointReferenceType *wsa__ReplyTo, struct wsa__EndpointReferenceType *wsa__FaultTo, char *wsa__To, char *wsa__Action, struct wsdd__AppSequenceType *wsdd__AppSequence, char *wsa5__MessageID, struct wsa5__RelatesToType *wsa5__RelatesTo, struct wsa5__EndpointReferenceType *wsa5__From, struct wsa5__EndpointReferenceType *wsa5__ReplyTo, struct wsa5__EndpointReferenceType *wsa5__FaultTo, char *wsa5__To, char *wsa5__Action, struct chan__ChannelInstanceType *chan__ChannelInstance, struct wsrm__SequenceType *wsrm__Sequence, int __sizeAckRequested, struct wsrm__AckRequestedType *wsrm__AckRequested, int __sizeSequenceAcknowledgement, struct _wsrm__SequenceAcknowledgement *wsrm__SequenceAcknowledgement, struct wsrm__SequenceFaultType *wsrm__SequenceFault, struct _wsse__Security *wsse__Security);
	/// Get SOAP Header structure (NULL when absent)
	virtual	const SOAP_ENV__Header *soap_header();
	/// Run simple single-thread iterative service on port until a connection error occurs (returns error code or SOAP_OK), use this->bind_flag = SO_REUSEADDR to rebind for a rerun
	virtual	int run(int port);
	/// Bind service to port (returns master socket or SOAP_INVALID_SOCKET)
	virtual	SOAP_SOCKET bind(const char *host, int port, int backlog);
	/// Accept next request (returns socket or SOAP_INVALID_SOCKET)
	virtual	SOAP_SOCKET accept();
#if defined(WITH_OPENSSL) || defined(WITH_GNUTLS)
	/// Then accept SSL handshake, when SSL is used
	virtual	int ssl_accept();
#endif
	/// Serve this request (returns error code or SOAP_OK)
	virtual	int serve();
	/// Used by serve() to dispatch a request (returns error code or SOAP_OK)
	virtual	int dispatch();

	///
	/// Service operations (you should define these):
	/// Note: compile with -DWITH_PURE_VIRTUAL for pure virtual methods
	///

	/// Web service operation 'GetServiceCapabilities' (returns error code or SOAP_OK)
	virtual	int GetServiceCapabilities(_ns1__GetServiceCapabilities *ns1__GetServiceCapabilities, _ns1__GetServiceCapabilitiesResponse *ns1__GetServiceCapabilitiesResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'CreateRSAKeyPair' (returns error code or SOAP_OK)
	virtual	int CreateRSAKeyPair(_ns1__CreateRSAKeyPair *ns1__CreateRSAKeyPair, _ns1__CreateRSAKeyPairResponse *ns1__CreateRSAKeyPairResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'GetKeyStatus' (returns error code or SOAP_OK)
	virtual	int GetKeyStatus(_ns1__GetKeyStatus *ns1__GetKeyStatus, _ns1__GetKeyStatusResponse *ns1__GetKeyStatusResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'GetPrivateKeyStatus' (returns error code or SOAP_OK)
	virtual	int GetPrivateKeyStatus(_ns1__GetPrivateKeyStatus *ns1__GetPrivateKeyStatus, _ns1__GetPrivateKeyStatusResponse *ns1__GetPrivateKeyStatusResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'GetAllKeys' (returns error code or SOAP_OK)
	virtual	int GetAllKeys(_ns1__GetAllKeys *ns1__GetAllKeys, _ns1__GetAllKeysResponse *ns1__GetAllKeysResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'DeleteKey' (returns error code or SOAP_OK)
	virtual	int DeleteKey(_ns1__DeleteKey *ns1__DeleteKey, _ns1__DeleteKeyResponse *ns1__DeleteKeyResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'CreatePKCS10CSR' (returns error code or SOAP_OK)
	virtual	int CreatePKCS10CSR(_ns1__CreatePKCS10CSR *ns1__CreatePKCS10CSR, _ns1__CreatePKCS10CSRResponse *ns1__CreatePKCS10CSRResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'CreateSelfSignedCertificate' (returns error code or SOAP_OK)
	virtual	int CreateSelfSignedCertificate(_ns1__CreateSelfSignedCertificate *ns1__CreateSelfSignedCertificate, _ns1__CreateSelfSignedCertificateResponse *ns1__CreateSelfSignedCertificateResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'UploadCertificate' (returns error code or SOAP_OK)
	virtual	int UploadCertificate(_ns1__UploadCertificate *ns1__UploadCertificate, _ns1__UploadCertificateResponse *ns1__UploadCertificateResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'GetCertificate' (returns error code or SOAP_OK)
	virtual	int GetCertificate(_ns1__GetCertificate *ns1__GetCertificate, _ns1__GetCertificateResponse *ns1__GetCertificateResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'GetAllCertificates' (returns error code or SOAP_OK)
	virtual	int GetAllCertificates(_ns1__GetAllCertificates *ns1__GetAllCertificates, _ns1__GetAllCertificatesResponse *ns1__GetAllCertificatesResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'DeleteCertificate' (returns error code or SOAP_OK)
	virtual	int DeleteCertificate(_ns1__DeleteCertificate *ns1__DeleteCertificate, _ns1__DeleteCertificateResponse *ns1__DeleteCertificateResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'CreateCertificationPath' (returns error code or SOAP_OK)
	virtual	int CreateCertificationPath(_ns1__CreateCertificationPath *ns1__CreateCertificationPath, _ns1__CreateCertificationPathResponse *ns1__CreateCertificationPathResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'GetCertificationPath' (returns error code or SOAP_OK)
	virtual	int GetCertificationPath(_ns1__GetCertificationPath *ns1__GetCertificationPath, _ns1__GetCertificationPathResponse *ns1__GetCertificationPathResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'GetAllCertificationPaths' (returns error code or SOAP_OK)
	virtual	int GetAllCertificationPaths(_ns1__GetAllCertificationPaths *ns1__GetAllCertificationPaths, _ns1__GetAllCertificationPathsResponse *ns1__GetAllCertificationPathsResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'DeleteCertificationPath' (returns error code or SOAP_OK)
	virtual	int DeleteCertificationPath(_ns1__DeleteCertificationPath *ns1__DeleteCertificationPath, _ns1__DeleteCertificationPathResponse *ns1__DeleteCertificationPathResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'AddServerCertificateAssignment' (returns error code or SOAP_OK)
	virtual	int AddServerCertificateAssignment(_ns1__AddServerCertificateAssignment *ns1__AddServerCertificateAssignment, _ns1__AddServerCertificateAssignmentResponse *ns1__AddServerCertificateAssignmentResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'RemoveServerCertificateAssignment' (returns error code or SOAP_OK)
	virtual	int RemoveServerCertificateAssignment(_ns1__RemoveServerCertificateAssignment *ns1__RemoveServerCertificateAssignment, _ns1__RemoveServerCertificateAssignmentResponse *ns1__RemoveServerCertificateAssignmentResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'ReplaceServerCertificateAssignment' (returns error code or SOAP_OK)
	virtual	int ReplaceServerCertificateAssignment(_ns1__ReplaceServerCertificateAssignment *ns1__ReplaceServerCertificateAssignment, _ns1__ReplaceServerCertificateAssignmentResponse *ns1__ReplaceServerCertificateAssignmentResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'GetAssignedServerCertificates' (returns error code or SOAP_OK)
	virtual	int GetAssignedServerCertificates(_ns1__GetAssignedServerCertificates *ns1__GetAssignedServerCertificates, _ns1__GetAssignedServerCertificatesResponse *ns1__GetAssignedServerCertificatesResponse) SOAP_PURE_VIRTUAL;
};
#endif
