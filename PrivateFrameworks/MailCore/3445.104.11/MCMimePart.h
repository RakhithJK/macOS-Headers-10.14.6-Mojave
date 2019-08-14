//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MCFileTypeInfo, MCMessageBody, NSArray, NSData, NSDate, NSError, NSMutableDictionary, NSString, WebArchive;

@interface MCMimePart : NSObject
{
    MCMimePart *_nextPart;
    long long _typeCode;
    long long _subtypeCode;
    NSString *_type;
    NSString *_subtype;
    NSMutableDictionary *_bodyParameters;
    NSString *_contentTransferEncoding;
    NSMutableDictionary *_otherIvars;
    id _partNumberLock;
    NSString *_partNumber;
    id _usedStringEncodingLock;
    unsigned long long _usedStringEncoding;
    id _encryptSignLock;
    NSArray *_messageSigners;
    MCMimePart *_cmsExtractedContent;
    NSError *_smimeError;
    BOOL _isEncrypted;
    BOOL _isSigned;
    BOOL _hideCalendarMimePart;
    BOOL _isMalformed;
    BOOL _fromMicrosoft;
    NSData *_headerData;
    NSData *_encodedBodyData;
    unsigned long long _contentLength;
    MCMimePart *_parentPart;
    unsigned long long _headerEncodingHint;
    NSString *_sender;
    NSDate *_dateReceived;
}

+ (BOOL)mimeParameterIsHumanReadable:(id)arg1;
+ (id)signingErrorForTrustEvaluation:(id)arg1;
+ (int)_addDataConvertingLineEndingsFromUnixToNetwork:(id)arg1 toCMSEncoder:(struct _CMSEncoder *)arg2;
+ (id)newEncryptedPartWithData:(id)arg1 certificates:(id)arg2 encryptedData:(id *)arg3;
@property(retain, nonatomic) NSDate *dateReceived; // @synthesize dateReceived=_dateReceived;
@property(copy, nonatomic) NSString *sender; // @synthesize sender=_sender;
@property(nonatomic) unsigned long long headerEncodingHint; // @synthesize headerEncodingHint=_headerEncodingHint;
@property(nonatomic) BOOL fromMicrosoft; // @synthesize fromMicrosoft=_fromMicrosoft;
@property(nonatomic) BOOL isMalformed; // @synthesize isMalformed=_isMalformed;
@property BOOL hideCalendarMimePart; // @synthesize hideCalendarMimePart=_hideCalendarMimePart;
@property(nonatomic) __weak MCMimePart *parentPart; // @synthesize parentPart=_parentPart;
@property(nonatomic) unsigned long long contentLength; // @synthesize contentLength=_contentLength;
@property(copy, nonatomic) NSString *contentTransferEncoding; // @synthesize contentTransferEncoding=_contentTransferEncoding;
@property(readonly, copy, nonatomic) NSData *encodedBodyData; // @synthesize encodedBodyData=_encodedBodyData;
@property(readonly, copy, nonatomic) NSData *headerData; // @synthesize headerData=_headerData;
- (void).cxx_destruct;
- (id)_decodeMultipartAppledouble;
- (id)_decodeApplicationApplefile;
- (id)_decodeApplicationMacBinHex;
- (id)_decodeMessageExternalBody;
- (id)_decodeMessagePartial;
- (id)_decodeMessageRfc822;
- (id)_decodeMessageDeliveryStatus;
- (id)_decodeApplicationSmil;
- (id)_decodeApplicationZip;
- (id)_decodeApplicationOctetStream;
- (id)_decodeApplicationAppleCompositeImage;
- (id)_decodeMultipartFolder;
- (id)_decodeMultipartRelated;
- (id)_decodeMultipartAlternative;
- (id)_decodeMultipart;
- (id)_decodeTextCalendar;
- (id)_decodeTextHtml;
- (id)_decodeTextEnriched;
- (id)_decodeTextRtf;
- (id)_decodeTextRichtext;
- (id)_decodeText;
- (id)_decode;
@property(readonly, copy, nonatomic) NSString *fullMimeTypeEvenInsideAppleDouble;
- (unsigned long long)_getHFSAttachmentEncodingHint;
- (id)_chosenAlternativePartOrParts:(id *)arg1;
- (id)_getSomeCharsetFromPartTree;
@property(readonly, nonatomic) BOOL isDirectoryAttachment;
- (id)cmsExtractedChildPartWithNumber:(id)arg1;
- (id)childPartWithNumber:(id)arg1;
@property(copy) NSString *partNumber;
- (void)_setupDictionary:(id *)arg1 fromArray:(id)arg2;
- (BOOL)parseIMAPPropertyList:(id)arg1;
- (BOOL)parse;
- (id)_parseUUEncodedPartsWithEncodingHint:(unsigned long long)arg1;
- (void)_parseSubpartsWithEncodingHint:(unsigned long long)arg1 hasVisualEncoding:(char *)arg2;
- (void)_parseHeadersWithEncodingHint:(unsigned long long)arg1 hasVisualEncoding:(char *)arg2;
- (id)_archiveForMultipartRelated;
@property(readonly, copy, nonatomic) WebArchive *webArchive;
- (id)_remoteAttachmentsByURL;
- (unsigned long long)_stringEncoding;
- (void)_fillInMessageBody:(id)arg1 fromAttachment:(id)arg2;
- (id)_messageBodyFromDecodedContents:(id)arg1;
@property(readonly, nonatomic) MCMessageBody *messageBody;
- (BOOL)_hasEncryptedDescendantPart;
- (id)_createArchiveWithConvertedPlainTextBodyClassFromArchive:(id)arg1;
- (id)_archiveForFileWrapper:(id)arg1 URL:(id)arg2;
- (id)_archiveForString:(id)arg1 URL:(id)arg2 needsPlainTextBodyClass:(BOOL)arg3;
- (id)_archiveForData:(id)arg1 URL:(id)arg2 MIMEType:(id)arg3 textEncodingName:(id)arg4 frameName:(id)arg5;
- (id)_archiveForData:(id)arg1 URL:(id)arg2 MIMEType:(id)arg3 textEncodingName:(id)arg4 frameName:(id)arg5 subresources:(id)arg6 subframeArchives:(id)arg7;
- (id)_decodedContent;
- (id)htmlStringForMimePart:(id)arg1 attachment:(id)arg2;
- (void)_htmlString:(id *)arg1 createWebResource:(id *)arg2 forFileWrapper:(id)arg3 partNumber:(id)arg4;
- (id)_nonMultipartPart;
- (id)_textHtmlPart;
- (id)_textPart;
@property(readonly, copy, nonatomic) NSData *signedData;
@property(readonly, nonatomic) MCMimePart *bestAlternative;
- (id)_startPart;
- (void)_configureFileWrapper:(id)arg1;
- (id)_fileWrapper;
- (id)_getAttachment;
- (id)_createFileWrapper;
@property(readonly, nonatomic) BOOL isAutoArchivePart;
- (BOOL)_isIWorkArchive;
- (void)_setMessageSigners:(id)arg1 andSigningError:(id)arg2;
- (id)_copyMessageSigners:(id *)arg1;
- (BOOL)_needsSignatureVerification:(id *)arg1;
@property(readonly, nonatomic) BOOL usesKnownSignatureProtocol;
@property(readonly, nonatomic) BOOL isRich;
@property(readonly, nonatomic) BOOL isAttachment;
- (BOOL)shouldConsiderInlineOverridingExchangeServer;
@property(readonly, nonatomic) BOOL isMessageExternalBodyWithURL;
- (id)_partThatIsAttachment;
- (void)markAsStationeryImage;
@property(readonly, nonatomic) BOOL isStationeryImage;
@property(readonly, nonatomic) BOOL isCalendar;
@property(readonly, nonatomic) BOOL isReadableText;
@property(readonly, nonatomic) unsigned long long approximateDecodedSize;
@property(readonly, nonatomic) unsigned long long approximateRawSize;
- (void)_setCMSExtractedContent:(id)arg1 isEncrypted:(BOOL)arg2 isSigned:(BOOL)arg3 error:(id)arg4;
- (id)_cmsExtractedContentIsEncrypted:(char *)arg1 isSigned:(char *)arg2 error:(id *)arg3;
- (id)_extractCMSContentIfNecessaryIsEncrypted:(char *)arg1 isSigned:(char *)arg2;
@property(readonly, nonatomic) MCMimePart *cmsExtractedContent;
@property(readonly, copy, nonatomic) NSArray *attachmentFilenames;
@property(readonly, copy, nonatomic) NSArray *attachments;
- (void)getNumberOfAttachments:(unsigned int *)arg1 filenames:(id)arg2 numberOfTNEFAttachments:(unsigned int *)arg3 isSigned:(char *)arg4 isEncrypted:(char *)arg5;
@property(readonly, nonatomic) unsigned int numberOfAttachments;
- (void)_getAttachmentsAndAddToCount:(unsigned int *)arg1 isSigned:(char *)arg2 isEncrypted:(char *)arg3 attachments:(id)arg4 attachmentsName:(id)arg5 numberOfTNEFAttachments:(unsigned int *)arg6;
@property(readonly, nonatomic) BOOL isCMSPart;
@property(readonly, copy, nonatomic) NSString *attachmentFilename;
- (id)_attachmentFilenameWithHiddenExtension:(char *)arg1;
- (void)_appendToDescription:(id)arg1 withIndent:(unsigned long long)arg2;
- (id)description;
@property(readonly, copy, nonatomic) NSString *bodyConvertedFromFlowedText;
- (unsigned long long)_usedStringEncoding;
@property(readonly, copy, nonatomic) NSString *bodyString;
- (id)decodedFromMimeData:(id)arg1;
@property(readonly, copy, nonatomic) NSData *decodedData;
@property(readonly, nonatomic) BOOL hasDataAvailable;
- (void)addSubpart:(id)arg1;
@property(copy, nonatomic) NSArray *subparts;
- (id)_subpartAtIndex:(long long)arg1;
- (void)enumerateSubPartsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) MCMimePart *nextSiblingPart;
@property(readonly, nonatomic) MCMimePart *firstChildPart;
@property(copy, nonatomic) NSArray *languages;
@property(copy, nonatomic) NSString *contentLocation;
@property(readonly, copy, nonatomic) NSString *contentIDURLString;
@property(copy, nonatomic) NSString *contentID;
@property(copy, nonatomic) NSString *contentDescription;
@property(readonly, copy, nonatomic) NSArray *dispositionParameterKeys;
- (void)setDispositionParameter:(id)arg1 forKey:(id)arg2;
- (id)dispositionParameterForKey:(id)arg1;
@property(copy, nonatomic) NSString *disposition;
@property(readonly, nonatomic) MCFileTypeInfo *typeInfo;
@property(readonly, nonatomic) unsigned int macCreatorCode;
@property(readonly, nonatomic) unsigned int macTypeCode;
@property(readonly, nonatomic) unsigned long long formatFlowedOptions;
@property(readonly, copy, nonatomic) NSArray *bodyParameterKeys;
- (void)setBodyParameter:(id)arg1 forKey:(id)arg2;
- (id)bodyParameterForKey:(id)arg1;
- (BOOL)_isTypeCode:(long long)arg1 subtypeCode:(long long)arg2;
- (BOOL)isType:(id)arg1 subtype:(id)arg2;
@property(copy, nonatomic) NSString *subtype;
- (long long)_subtypeCode;
@property(copy, nonatomic) NSString *type;
- (long long)_typeCode;
@property(readonly, nonatomic) unsigned long long encodedBodyDataLength;
- (void)dealloc;
- (id)initWithEncodedData:(id)arg1;
- (id)init;
- (id)initWithEncodedHeaderData:(id)arg1 encodedBodyData:(id)arg2;
- (id)_verifySignatureWithCMSDecoder:(struct _CMSDecoder *)arg1 againstSender:(id)arg2 signingError:(id *)arg3;
- (struct _CMSDecoder *)_newCMSDecoderWithMimePart:(id)arg1 error:(id *)arg2;
- (void)verifySignature;
- (id)_attachmentForSecureSubpart;
- (id)decodeApplicationPkcs7;
- (void)extractCMSContent;
- (id)decodeMultipartSigned;
- (id)newSignedPartWithData:(id)arg1 sender:(id)arg2 identity:(struct OpaqueSecIdentityRef *)arg3 signatureData:(id *)arg4;

@end

