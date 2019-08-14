//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSExtension, NSSet, NSString, _MXExtensionProvider;

@interface _MXExtension : NSObject
{
    NSString *_identifier;
    _MXExtensionProvider *_provider;
}

@property(nonatomic) __weak _MXExtensionProvider *provider; // @synthesize provider=_provider;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)_containingAppIdentifer;
- (id)siblingExtensions;
- (BOOL)_isIntentExtension;
- (BOOL)_isMapsExtension;
- (BOOL)_setEnabled:(BOOL)arg1 error:(id *)arg2;
@property(readonly, nonatomic) NSExtension *extension;
@property(readonly, copy, nonatomic) NSString *containingAppDisplayName;
@property(readonly, copy, nonatomic) NSString *displayName;
- (id)description;
@property(readonly, copy, nonatomic) NSSet *capabilities;
@property(readonly, nonatomic) unsigned long long type;
@property(readonly, nonatomic, getter=isEnabled) BOOL enabled;
@property(readonly, copy, nonatomic) NSDictionary *attributes;
@property(readonly, copy, nonatomic) NSDictionary *infoDictionary;
@property(readonly, copy, nonatomic) NSString *extensionPointIdentifier;
- (id)initWithExtensionIdentifier:(id)arg1 extensionProvider:(id)arg2;
- (void)startRideSharingSearchRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)handleRequest:(id)arg1 requestDispatcher:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)startSendingUpdatesForRequest:(id)arg1 requestDispatcher:(id)arg2 toObserver:(id)arg3;
- (void)startExtensionServiceWithInputItems:(id)arg1 begin:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;

@end

