//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IPXRenderChangeAction.h"

@interface IPXFlipAction : IPXRenderChangeAction
{
    BOOL _horizontal;
}

@property(readonly, getter=isHorizontal) BOOL horizontal; // @synthesize horizontal=_horizontal;
- (int)performRenderChange:(id)arg1;
- (id)defaultActionNameLocalizationKey;
- (id)initWithHorizontal:(BOOL)arg1 versions:(id)arg2;

@end
