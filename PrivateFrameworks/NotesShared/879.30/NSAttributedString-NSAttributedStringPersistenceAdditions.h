//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSAttributedString.h>

@interface NSAttributedString (NSAttributedStringPersistenceAdditions)
+ (id)TT_attributedStringWithData:(id)arg1 dataPersister:(id)arg2 note:(id)arg3 shouldCreateAttachments:(BOOL)arg4 error:(id *)arg5;
+ (id)TT_attributedStringWithData:(id)arg1 dataPersister:(id)arg2 createNewAttachmentsInNote:(id)arg3 error:(id *)arg4;
+ (id)TT_attributedStringWithArchive:(const struct String *)arg1 dataPersister:(id)arg2 note:(id)arg3 shouldCreateNewAttachments:(BOOL)arg4 error:(id *)arg5;
- (BOOL)TT_isCopyableSize;
- (unsigned long long)TT_approximateAttachmentsSizeIncludingPreviews:(BOOL)arg1;
- (id)TT_serializeWithFlags:(unsigned long long)arg1 dataPersister:(id)arg2 managedObjectContext:(id)arg3;
- (void)TT_saveToArchive:(struct String *)arg1 flags:(unsigned long long)arg2 dataPersister:(id)arg3 managedObjectContext:(id)arg4;
@end

