//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/ROCKForwardingInterposableWithRunLoop-Protocol.h>
#import <UIKitCore/UHAMenuInterface-Protocol.h>

@class NSArray, NSString;
@protocol OS_dispatch_queue;

@interface _UIMenuBarMenu : NSObject <UHAMenuInterface, ROCKForwardingInterposableWithRunLoop>
{
    NSArray *_items;
    NSString *_title;
}

+ (id)_menuIdentifierForStandardItem:(id)arg1;
+ (BOOL)_isValidMenuIdentifier:(id)arg1;
+ (BOOL)menuBarBuilt;
+ (void)setMenuBarBuilt:(BOOL)arg1;
+ (id)mainMenu;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)_validate;
- (id)initWithTitle:(id)arg1;
- (id)init;
@property(copy, nonatomic) NSArray *items;
- (void)deleteStandardItems:(id)arg1;
- (void)insertItems:(id)arg1 afterStandardItem:(id)arg2;
- (void)insertItems:(id)arg1 atBeginningOfMenu:(id)arg2;
- (void)insertMenu:(id)arg1 afterStandardMenu:(id)arg2;
- (struct __CFString *)forwardingInterposableRunLoopMode;
- (double)forwardingInterposableRunLoopTimeOut;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) unsigned long long rock_invocationFlags;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *rock_invocationQueue;
@property(readonly) Class superclass;

@end

