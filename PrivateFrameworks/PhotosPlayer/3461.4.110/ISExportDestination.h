//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;

@interface ISExportDestination : NSObject
{
    NSURL *_photoURL;
    NSURL *_videoURL;
}

+ (id)destinationWithPhotoURL:(id)arg1 videoURL:(id)arg2;
@property(readonly) NSURL *videoURL; // @synthesize videoURL=_videoURL;
@property(readonly) NSURL *photoURL; // @synthesize photoURL=_photoURL;
- (void).cxx_destruct;
- (id)initWithPhotoURL:(id)arg1 videoURL:(id)arg2;

@end

