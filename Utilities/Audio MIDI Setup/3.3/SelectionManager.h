//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableArray;

@interface SelectionManager : NSObject
{
    NSMutableArray *mSelectedObjects;
    NSMutableArray *mProposedNewSelectedObjects;
    int mSelectionBehavior;
    NSDictionary *mUserInfoDictionary;
}

- (id)selectedObjects;
- (BOOL)setSelectedObjects:(id)arg1 withBehavior:(int)arg2 userInfo:(id)arg3;
- (void)dealloc;
- (id)init;
- (void)privConfirmSelectedObjects;

@end

