//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <WebInspector/RWIProtocolJSONObject.h>

@class WDProtocolAutomationPoint, WDProtocolAutomationSize;

@interface WDProtocolAutomationRect : RWIProtocolJSONObject
{
}

@property(retain, nonatomic) WDProtocolAutomationSize *size;
@property(retain, nonatomic) WDProtocolAutomationPoint *origin;
- (id)initWithOrigin:(id)arg1 size:(id)arg2;
- (id)initWithProtocolObject:(id)arg1;
- (id)initWithPayload:(id)arg1;

@end

