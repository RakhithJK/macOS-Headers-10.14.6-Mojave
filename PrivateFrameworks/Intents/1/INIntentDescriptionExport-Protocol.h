//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Intents/JSExport-Protocol.h>
#import <Intents/NSObject-Protocol.h>

@class NSDictionary, NSString;

@protocol INIntentDescriptionExport <NSObject, JSExport>
@property(readonly, copy, nonatomic) NSDictionary *slotsByName;
@property(readonly, nonatomic) SEL confirmSelector;
@property(readonly, nonatomic) SEL handleSelector;
@property(readonly, nonatomic) BOOL isPrivate;
@property(readonly, copy, nonatomic) NSString *type;
@property(readonly, nonatomic) Class dataClass;
@property(readonly, nonatomic) Class facadeClass;
@property(readonly, copy, nonatomic) NSString *responseName;
@property(readonly, copy, nonatomic) NSString *name;
- (id)init;
@end

