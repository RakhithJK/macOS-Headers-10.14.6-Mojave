//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSUndoManager;

@interface ACSHPlistObject : NSObject
{
    NSUndoManager *_undoManager;
    NSString *_identifier;
    BOOL _isInitializing;
}

+ (id)createWithDictionary:(id)arg1 undoManager:(id)arg2;
+ (Class)classForDict:(id)arg1;
+ (id)keysForValuesToObserveForView;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
@property(readonly, nonatomic) NSUndoManager *undoManager; // @synthesize undoManager=_undoManager;
@property(nonatomic) BOOL isInitializing; // @synthesize isInitializing=_isInitializing;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)descriptionForDepth:(unsigned long long)arg1;
- (id)dictionaryForSaving;
- (void)_configureWithPlistDictionary:(id)arg1;
- (id)initWithUndoManager:(id)arg1;

@end

