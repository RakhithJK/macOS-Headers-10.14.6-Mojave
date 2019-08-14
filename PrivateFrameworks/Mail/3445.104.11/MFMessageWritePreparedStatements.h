//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MFPreparedStatement, MFSqliteHandle;

@interface MFMessageWritePreparedStatements : NSObject
{
    MFPreparedStatement *_fetchMessageStatement;
    MFPreparedStatement *_fetchSubjectStatement;
    MFPreparedStatement *_fetchSenderAndSubjectStatement;
    MFPreparedStatement *_insertSubjectStatement;
    MFPreparedStatement *_insertThreadStatement;
    MFPreparedStatement *_insertAttachmentsStatement;
    MFPreparedStatement *_insertRecipientsStatement;
    MFPreparedStatement *_insertAddressesStatement;
    MFPreparedStatement *_insertEventStatement;
    MFPreparedStatement *_fetchRecipientStatement;
    MFPreparedStatement *_fetchAddressStatement;
    MFPreparedStatement *_copyRecipientStatement;
    MFPreparedStatement *_copyThreadStatement;
    MFPreparedStatement *_copyAttachmentStatement;
    MFPreparedStatement *_copyEventStatement;
    MFPreparedStatement *_deleteThreadStatement;
    MFPreparedStatement *_deleteAttachmentStatement;
    MFPreparedStatement *_deleteRecipientStatement;
    MFPreparedStatement *_deleteAddressesStatement;
    MFPreparedStatement *_deleteSubjectsStatement;
    MFSqliteHandle *_handle;
}

@property(readonly, nonatomic) MFSqliteHandle *handle; // @synthesize handle=_handle;
- (void).cxx_destruct;
@property(readonly, nonatomic) MFPreparedStatement *deleteSubjectsStatement;
@property(readonly, nonatomic) MFPreparedStatement *deleteAddressesStatement;
@property(readonly, nonatomic) MFPreparedStatement *deleteRecipientStatement;
@property(readonly, nonatomic) MFPreparedStatement *deleteAttachmentStatement;
@property(readonly, nonatomic) MFPreparedStatement *deleteThreadStatement;
@property(readonly, nonatomic) MFPreparedStatement *copyEventStatement;
@property(readonly, nonatomic) MFPreparedStatement *copyAttachmentStatement;
@property(readonly, nonatomic) MFPreparedStatement *copyThreadStatement;
@property(readonly, nonatomic) MFPreparedStatement *copyRecipientStatement;
@property(readonly, nonatomic) MFPreparedStatement *insertEventStatement;
@property(readonly, nonatomic) MFPreparedStatement *insertAddressesStatement;
@property(readonly, nonatomic) MFPreparedStatement *insertRecipientsStatement;
@property(readonly, nonatomic) MFPreparedStatement *insertAttachmentsStatement;
@property(readonly, nonatomic) MFPreparedStatement *insertThreadStatement;
@property(readonly, nonatomic) MFPreparedStatement *insertSubjectStatement;
@property(readonly, nonatomic) MFPreparedStatement *fetchAddressStatement;
@property(readonly, nonatomic) MFPreparedStatement *fetchRecipientStatement;
@property(readonly, nonatomic) MFPreparedStatement *fetchSenderAndSubjectStatement;
@property(readonly, nonatomic) MFPreparedStatement *fetchSubjectStatement;
@property(readonly, nonatomic) MFPreparedStatement *fetchMessageStatement;
- (void)handleSQLError:(int)arg1 errorString:(id)arg2;
- (id)init;
- (id)initWithHandle:(id)arg1;

@end

