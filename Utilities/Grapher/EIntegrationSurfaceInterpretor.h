//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "EIntegrationGraphInterpretor.h"

@class DSurface, EIntegrationKindView, EIntegrationView, GSurface, NSString, OPOperation;

@interface EIntegrationSurfaceInterpretor : EIntegrationGraphInterpretor
{
    EIntegrationKindView *mExplicitSurfaceKindView;
    EIntegrationView *mIntegrationView;
    GSurface *mGraph;
    DSurface *mDefinition;
    unsigned long long mSurfaceKind;
    NSString *mFName;
    NSString *mGName;
    NSString *mTVariableName;
    NSString *mUVariableName;
    OPOperation *mFOperation;
    OPOperation *mGOperation;
}

- (void)calculate;
- (void)setKind:(id)arg1;
- (id)validKinds;
- (id)integrationView;
- (id)integrationKindView;
- (BOOL)canInterpretGraph:(id)arg1;
- (void)dealloc;

@end

