//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HFItemManagerDelegate-Protocol.h"

@class HOHomeScreenQuickActionItemManager, NSString, UIApplication;

@interface HOHomeScreenQuickActionController : NSObject <HFItemManagerDelegate>
{
    UIApplication *_application;
    HOHomeScreenQuickActionItemManager *_itemManager;
}

@property(retain, nonatomic) HOHomeScreenQuickActionItemManager *itemManager; // @synthesize itemManager=_itemManager;
@property(retain, nonatomic) UIApplication *application; // @synthesize application=_application;
- (void).cxx_destruct;
- (id)initWithApplication:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

