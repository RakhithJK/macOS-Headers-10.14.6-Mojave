//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface SXQuickLookFile : NSObject
{
    NSURL *_fileURL;
    NSString *_title;
}

@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
- (void).cxx_destruct;
- (id)initWithFileURL:(id)arg1 title:(id)arg2;
- (id)initWithFileURL:(id)arg1;
- (id)previewItemTitle;
- (id)previewItemURL;

@end

