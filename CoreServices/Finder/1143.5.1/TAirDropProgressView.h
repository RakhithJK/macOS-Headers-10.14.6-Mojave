//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TUpdateLayerView.h"

#import "CALayerDelegate-Protocol.h"

@class NSString;

@interface TAirDropProgressView : TUpdateLayerView <CALayerDelegate>
{
    struct TNSRef<TAirDropProgressLayer, void> _progressLayer;
    _Bool _pressed;
}

@property(nonatomic) _Bool pressed; // @synthesize pressed=_pressed;
- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)layer:(id)arg1 shouldInheritContentsScale:(double)arg2 fromWindow:(id)arg3;
- (_Bool)shouldShowProgressLayer;
- (void)resetProgress;
@property(nonatomic) _Bool indeterminate; // @dynamic indeterminate;
@property(nonatomic) double percentComplete; // @dynamic percentComplete;
- (void)updateLayer;
- (void)awakeFromNib;
- (void)initCommon;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

