//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Notes/NSURLDownloadDelegate-Protocol.h>

@class ICNFMCError, ICNFMCFileTypeInfo, ICNFMCMessage, ICNFMCMessageBody, ICNFMCMimeBody, ICNFMCParsedMessage, NSArray, NSData, NSFileWrapper, NSMutableDictionary, NSString, WebArchive;
@protocol ICNFMCMessageDataSource;

@interface ICNFMCMimePart : NSObject <NSURLDownloadDelegate>
{
    id _parentOrBody;
    ICNFMCMimePart *_nextPart;
    long long _typeCode;
    long long _subtypeCode;
    NSString *_type;
    NSString *_subtype;
    NSMutableDictionary *_bodyParameters;
    NSString *_contentTransferEncoding;
    id _encryptSignLock;
    NSArray *_messageSigners;
    ICNFMCError *_smimeError;
    NSMutableDictionary *_otherIvars;
    BOOL _isMimeEncrypted;
    BOOL _isMimeSigned;
    ICNFMCMessageBody *_decryptedMessageBody;
    ICNFMCMessage *_decryptedMessage;
    id <ICNFMCMessageDataSource> _decryptedMessageDataSource;
    struct _NSRange _range;
}

+ (BOOL)mimeParameterIsHumanReadable:(id)arg1;
@property(retain, nonatomic) id <ICNFMCMessageDataSource> decryptedMessageDataSource; // @synthesize decryptedMessageDataSource=_decryptedMessageDataSource;
@property(retain, nonatomic) ICNFMCMessage *decryptedMessage; // @synthesize decryptedMessage=_decryptedMessage;
@property(retain, nonatomic) ICNFMCMessageBody *decryptedMessageBody; // @synthesize decryptedMessageBody=_decryptedMessageBody;
@property(nonatomic) BOOL isMimeSigned; // @synthesize isMimeSigned=_isMimeSigned;
@property(nonatomic) BOOL isMimeEncrypted; // @synthesize isMimeEncrypted=_isMimeEncrypted;
@property(copy, nonatomic) NSString *contentTransferEncoding; // @synthesize contentTransferEncoding=_contentTransferEncoding;
@property(nonatomic) struct _NSRange range; // @synthesize range=_range;
- (void).cxx_destruct;
- (id)decodeMultipartAppledoubleWithContext:(id)arg1;
- (id)decodeApplicationApplefileWithContext:(id)arg1;
- (id)decodeApplicationMac_binhex40WithContext:(id)arg1;
- (id)decodeMessageExternal_bodyWithContext:(id)arg1;
- (id)decodeMessagePartialWithContext:(id)arg1;
- (id)decodeMessageRfc822WithContext:(id)arg1;
- (id)decodeMessageDelivery_statusWithContext:(id)arg1;
- (id)decodeApplicationSmilWithContext:(id)arg1;
- (id)decodeApplicationZipWithContext:(id)arg1;
- (id)decodeApplicationOctet_streamWithContext:(id)arg1;
- (id)decodeApplicationApple_msg_composite_imageWithContext:(id)arg1;
- (id)decodeMultipartFolderWithContext:(id)arg1;
- (id)decodeMultipartRelatedWithContext:(id)arg1;
- (id)decodeMultipartAlternativeWithContext:(id)arg1;
- (id)decodeMultipartWithContext:(id)arg1;
- (id)decodeTextCalendarWithContext:(id)arg1;
- (id)decodeTextHtmlWithContext:(id)arg1;
- (id)decodeTextEnrichedWithContext:(id)arg1;
- (id)decodeTextRtfWithContext:(id)arg1;
- (id)decodeTextRichtextWithContext:(id)arg1;
- (id)decodeTextWithContext:(id)arg1;
- (id)decodeTextPlainWithContext:(id)arg1;
- (id)decode;
- (id)decodeWithContext:(id)arg1;
- (id)_fullMimeTypeEvenInsideAppleDouble;
- (unsigned long long)_getHFSAttachmentEncodingHint;
- (id)_chosenAlternativePartOrParts:(id *)arg1;
- (id)_getSomeCharsetFromPartTree;
@property(readonly, copy, nonatomic) NSString *partNumber;
- (void)_setupDictionary:(id *)arg1 fromArray:(id)arg2;
- (BOOL)parseIMAPPropertyList:(id)arg1;
- (BOOL)parseMimeBody;
- (BOOL)parseMimeBodyFetchIfNotAvailable:(BOOL)arg1 allowPartial:(BOOL)arg2;
- (id)_parseUUEncodedPartsWithEncodingHint:(unsigned long long)arg1 bodyData:(id)arg2 range:(struct _NSRange)arg3;
- (void)_parseSubpartsWithEncodingHint:(unsigned long long)arg1 messageBodyData:(id)arg2 hasVisualEncoding:(char *)arg3;
- (void)_parseHeadersWithEncodingHint:(unsigned long long)arg1 headerData:(id)arg2 bodyData:(id)arg3 hasVisualEncoding:(char *)arg4;
- (void)setDecryptedMessageBody:(id)arg1 isEncrypted:(BOOL)arg2 isSigned:(BOOL)arg3 error:(id)arg4;
- (void)clearCachedDecryptedMessageBody;
- (id)decryptedMessageBodyIsEncrypted:(char *)arg1 isSigned:(char *)arg2 error:(id *)arg3;
- (id)_archiveForMultipartRelated;
@property(readonly, copy, nonatomic) WebArchive *webArchive;
- (id)parsedMessageWithContext:(id)arg1;
@property(readonly, nonatomic) ICNFMCParsedMessage *parsedMessage;
- (id)_createArchiveWithConvertedPlainTextBodyClassFromArchive:(id)arg1;
- (id)_archiveForFileWrapper:(id)arg1 URL:(id)arg2;
- (id)_archiveForString:(id)arg1 URL:(id)arg2 needsPlainTextBodyClass:(BOOL)arg3;
- (id)_archiveForData:(id)arg1 URL:(id)arg2 MIMEType:(id)arg3 textEncodingName:(id)arg4 frameName:(id)arg5;
- (id)_archiveForData:(id)arg1 URL:(id)arg2 MIMEType:(id)arg3 textEncodingName:(id)arg4 frameName:(id)arg5 subresources:(id)arg6 subframeArchives:(id)arg7;
- (id)decodedContent;
- (id)decodedContentWithContext:(id)arg1;
- (id)htmlStringForMimePart:(id)arg1 attachment:(id)arg2;
- (void)htmlString:(id *)arg1 createWebResource:(id *)arg2 forFileWrapper:(id)arg3 partNumber:(id)arg4;
@property(readonly, nonatomic) ICNFMCMimePart *textHtmlPart;
- (id)textPart;
@property(readonly, copy, nonatomic) NSData *signedData;
@property(readonly, nonatomic) ICNFMCMimePart *bestAlternative;
@property(readonly, nonatomic) ICNFMCMimePart *startPart;
- (void)configureFileWrapper:(id)arg1;
- (void)downloadDidFinish:(id)arg1;
- (void)download:(id)arg1 didFailWithError:(id)arg2;
- (void)download:(id)arg1 didReceiveDataOfLength:(unsigned long long)arg2;
- (void)download:(id)arg1 didReceiveResponse:(id)arg2;
- (id)_remoteFileWrapper;
@property(readonly, nonatomic) NSFileWrapper *fileWrapper;
- (id)attributedString;
- (id)_getMessageAttachment:(long long)arg1;
- (id)_getMessageAttachment:(long long)arg1 context:(id)arg2;
- (id)_createFileWrapper;
- (id)_newAttachment;
@property(readonly, nonatomic) BOOL isAutoArchivePart;
- (BOOL)_isIWorkArchive;
- (void)_setMessageSigners:(id)arg1 andSigningError:(id)arg2;
- (id)copyMessageSigners;
- (BOOL)needsSignatureVerification:(id *)arg1;
@property(readonly, nonatomic) BOOL usesKnownSignatureProtocol;
@property(readonly, nonatomic) BOOL isHTML;
@property(readonly, nonatomic) BOOL isRich;
@property(readonly, nonatomic) BOOL isAttachment;
- (BOOL)shouldConsiderInlineOverridingExchangeServer;
@property(readonly, nonatomic) BOOL isMessageExternalBodyWithURL;
- (id)_partThatIsAttachment;
- (void)markAsStationeryImage;
@property(readonly, nonatomic) BOOL isStationeryImage;
@property(readonly, nonatomic) BOOL isCalendar;
@property(readonly, nonatomic) BOOL isImage;
@property(readonly, nonatomic) BOOL isReadableText;
@property(readonly, nonatomic) unsigned long long approximateDecodedSize;
@property(readonly, nonatomic) unsigned long long approximateRawSize;
@property(readonly, copy, nonatomic) NSArray *attachmentFilenames;
@property(readonly, copy, nonatomic) NSArray *attachments;
- (void)getNumberOfAttachments:(unsigned int *)arg1 filenames:(id)arg2 numberOfTNEFAttachments:(unsigned int *)arg3 isSigned:(char *)arg4 isEncrypted:(char *)arg5;
@property(readonly, nonatomic) unsigned int numberOfAttachments;
- (void)_getAttachmentsAndAddToCount:(unsigned int *)arg1 isSigned:(char *)arg2 isEncrypted:(char *)arg3 attachments:(id)arg4 attachmentsName:(id)arg5 numberOfTNEFAttachments:(unsigned int *)arg6;
@property(readonly, nonatomic) BOOL hasCachedDataInStore;
@property(readonly, nonatomic) BOOL isEncrypted;
@property(readonly, nonatomic) BOOL isSigned;
@property(readonly, copy, nonatomic) NSString *attachmentFilename;
- (id)_attachmentFilenameWithHiddenExtension:(char *)arg1;
- (void)_appendToDescription:(id)arg1 withIndent:(unsigned long long)arg2;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) ICNFMCMimeBody *mimeBody;
@property(readonly, copy, nonatomic) NSString *bodyConvertedFromFlowedText;
@property(readonly, copy, nonatomic) NSString *bodyString;
@property(readonly, copy, nonatomic) NSData *bodyData;
- (void)addSubpart:(id)arg1;
@property(copy, nonatomic) NSArray *subparts;
- (id)subpartAtIndex:(long long)arg1;
@property(readonly, nonatomic) ICNFMCMimePart *nextSiblingPart;
@property(readonly, nonatomic) ICNFMCMimePart *firstChildPart;
@property(readonly, nonatomic) ICNFMCMimePart *parentPart;
@property(copy, nonatomic) NSArray *languages;
@property(copy, nonatomic) NSString *contentLocation;
@property(readonly, copy, nonatomic) NSString *contentIDURLString;
@property(copy, nonatomic) NSString *contentID;
@property(copy, nonatomic) NSString *contentDescription;
@property(readonly, copy, nonatomic) NSArray *dispositionParameterKeys;
- (void)setDispositionParameter:(id)arg1 forKey:(id)arg2;
- (id)dispositionParameterForKey:(id)arg1;
@property(copy, nonatomic) NSString *disposition;
@property(readonly, nonatomic) ICNFMCFileTypeInfo *typeInfo;
@property(readonly, nonatomic) unsigned int macCreatorCode;
@property(readonly, nonatomic) unsigned int macTypeCode;
@property(readonly, nonatomic) unsigned long long formatFlowedOptions;
@property(readonly, copy, nonatomic) NSArray *bodyParameterKeys;
- (void)setBodyParameter:(id)arg1 forKey:(id)arg2;
- (id)bodyParameterForKey:(id)arg1;
- (BOOL)isTypeCode:(long long)arg1 subtypeCode:(long long)arg2;
- (BOOL)isType:(id)arg1 subtype:(id)arg2;
@property(copy, nonatomic) NSString *subtype;
- (long long)subtypeCode;
@property(copy, nonatomic) NSString *type;
- (long long)typeCode;
- (id)init;
- (void)dealloc;
- (id)copySignerLabels;
- (void)verifySignature;
- (id)decodeApplicationPkcs7_mimeWithContext:(id)arg1;
- (id)decodeMultipartSignedWithContext:(id)arg1;
- (id)_verifySignatureWithCMSDecoder:(struct _CMSDecoder *)arg1 againstSender:(id)arg2 signingError:(id *)arg3;
- (struct _CMSDecoder *)_newCMSDecoderWithMimePart:(id)arg1 error:(id *)arg2;
- (id)newEncryptedPartWithData:(id)arg1 recipients:(id)arg2 encryptedData:(id *)arg3;
- (id)newSignedPartWithData:(id)arg1 sender:(id)arg2 signatureData:(id *)arg3;
- (int)_addDataConvertingLineEndingsFromUnixToNetwork:(id)arg1 toCMSEncoder:(struct _CMSEncoder *)arg2;
- (void)renderString:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
