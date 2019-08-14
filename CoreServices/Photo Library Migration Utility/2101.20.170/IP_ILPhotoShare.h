//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Cocoa/NSObject.h>

@class NSMutableDictionary;
@protocol ILShareContentsDelegate;

@interface IP_ILPhotoShare : NSObject
{
    id <ILShareContentsDelegate> _shareContentsDelegate;
    NSMutableDictionary *_properties;
    BOOL _dirty;
}

- (void)bumpPropertiesVersion;
- (id)propertiesVersion;
- (void)setPropertiesVersion:(id)arg1;
- (void)setProperty:(id)arg1 forKey:(id)arg2;
- (id)propertyForKey:(id)arg1;
- (void)savePersistenceDictionary;
- (id)persistenceDictionary;
- (id)shareContentsDelegate;
- (void)setShareContentsDelegate:(id)arg1;
- (void)operationEnded:(id)arg1;
- (void)_unsetupObservers;
- (void)_setupObservers;
- (void)dealloc;
- (id)initWithContentsDelegate:(id)arg1;
- (id)init;

@end

