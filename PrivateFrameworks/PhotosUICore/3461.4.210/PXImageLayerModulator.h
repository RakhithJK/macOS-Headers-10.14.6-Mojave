//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CALayer;

@interface PXImageLayerModulator : NSObject
{
    BOOL _displayingVideoComplement;
    CALayer *_layer;
}

@property(readonly, nonatomic, getter=isDisplayingVideoComplement) BOOL displayingVideoComplement; // @synthesize displayingVideoComplement=_displayingVideoComplement;
@property(readonly, nonatomic) CALayer *layer; // @synthesize layer=_layer;
- (void).cxx_destruct;
- (void)performChanges:(CDUnknownBlockType)arg1;
- (id)init;

@end

