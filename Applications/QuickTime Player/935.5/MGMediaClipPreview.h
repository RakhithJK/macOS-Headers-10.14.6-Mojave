//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CALayer, MGMediaClip;

@interface MGMediaClipPreview : NSObject
{
    MGMediaClip *_mediaClip;
    BOOL _inLiveResize;
}

@property(nonatomic, getter=isInLiveResize) BOOL inLiveResize; // @synthesize inLiveResize=_inLiveResize;
@property(readonly, nonatomic) MGMediaClip *mediaClip; // @synthesize mediaClip=_mediaClip;
- (void).cxx_destruct;
@property(readonly, nonatomic) CALayer *previewLayer;
- (id)init;
- (id)initWithMediaClip:(id)arg1;

@end
