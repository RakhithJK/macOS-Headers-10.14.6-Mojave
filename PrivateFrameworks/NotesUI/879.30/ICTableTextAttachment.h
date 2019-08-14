//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <NotesUI/ICTextAttachment.h>

@interface ICTableTextAttachment : ICTextAttachment
{
    double _lastAvailableWidth;
    struct CGSize _lastAttachmentSize;
}

@property(nonatomic) struct CGSize lastAttachmentSize; // @synthesize lastAttachmentSize=_lastAttachmentSize;
@property(nonatomic) double lastAvailableWidth; // @synthesize lastAvailableWidth=_lastAvailableWidth;
- (id)printableTextContent;
- (void)fixAttachmentForAttributedString:(id)arg1 range:(struct _NSRange)arg2 forPlainText:(BOOL)arg3 forStandardizedText:(BOOL)arg4;
- (CDStruct_d2b197d1)attachmentBoundsMargins;
- (BOOL)canDragWithoutSelecting;

@end

