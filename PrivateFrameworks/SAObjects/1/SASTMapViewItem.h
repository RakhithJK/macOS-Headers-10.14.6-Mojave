//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SASTActionableTemplateItem-Protocol.h>

@class NSDate, NSNumber, NSString, SALocation;
@protocol SASTTemplateAction;

@interface SASTMapViewItem : AceObject <SASTActionableTemplateItem>
{
}

+ (id)mapViewItemWithDictionary:(id)arg1 context:(id)arg2;
+ (id)mapViewItem;
@property(copy, nonatomic) NSNumber *zoomLevel;
@property(retain, nonatomic) SALocation *location;
@property(copy, nonatomic) NSDate *extSessionGuidCreatedTimestamp;
@property(copy, nonatomic) NSString *extSessionGuid;
@property(retain, nonatomic) id <SASTTemplateAction> action; // @dynamic action;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

