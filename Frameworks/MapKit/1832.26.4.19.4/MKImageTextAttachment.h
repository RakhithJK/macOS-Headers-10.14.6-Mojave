//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSTextAttachment.h>

@class MKImageAttachmentCell;

@interface MKImageTextAttachment : NSTextAttachment
{
    double _verticalOffset;
    MKImageAttachmentCell *_imageAttachmentCell;
}

@property(nonatomic) double verticalOffset; // @synthesize verticalOffset=_verticalOffset;
- (void).cxx_destruct;
- (id)initWithImage:(id)arg1 verticalOffset:(double)arg2;

@end
