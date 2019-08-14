//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ServerFoundation/NSCopying-Protocol.h>

@class NSDictionary, NSString, XSEventHandler;

@interface XSEventRecoveryOption : NSObject <NSCopying>
{
    XSEventHandler *_eventHandler;
    NSDictionary *_configurationDictionary;
    NSString *_title;
    NSString *_description;
    NSString *_confirmationTitle;
}

+ (id)remoteRecoveryOptionWithConfigurationDictionary:(id)arg1;
+ (id)recoveryOptionWithConfigurationDictionary:(id)arg1;
+ (Class)classForRecoveryOptionType:(id)arg1;
+ (id)recoveryOptionType;
@property(retain) NSString *confirmationTitle; // @synthesize confirmationTitle=_confirmationTitle;
@property(retain) NSString *description; // @synthesize description=_description;
@property(retain) NSString *title; // @synthesize title=_title;
@property XSEventHandler *eventHandler; // @synthesize eventHandler=_eventHandler;
- (id)remoteExecutionAction;
- (id)executionAction;
- (void)setConfigurationFromDictionary:(id)arg1;
- (id)configurationDictionary;
- (id)initWithConfigurationDictionary:(id)arg1;
- (void)applySettings:(id)arg1;
- (void)applyEvent:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;

@end

