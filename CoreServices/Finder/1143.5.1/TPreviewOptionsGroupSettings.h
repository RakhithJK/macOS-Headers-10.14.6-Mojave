//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSSet, TPreviewOptionsGroup;
@protocol TPreviewOptionsGroupSettingsDelegete;

@interface TPreviewOptionsGroupSettings : NSObject
{
    struct TNSRef<TPreviewOptionsGroup, void> _group;
    struct TNSRef<NSMutableSet<NSString *>, void> _activeKeys;
    id <TPreviewOptionsGroupSettingsDelegete> _delegate;
}

@property(nonatomic) id <TPreviewOptionsGroupSettingsDelegete> delegate; // @synthesize delegate=_delegate;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool allDisabled; // @dynamic allDisabled;
@property(nonatomic) _Bool allEnabled; // @dynamic allEnabled;
- (_Bool)keyIsEnabled:(id)arg1;
- (void)setEnabled:(_Bool)arg1 forKey:(id)arg2;
- (void)_setEnabled:(_Bool)arg1 forKey:(id)arg2;
@property(readonly, nonatomic) _Bool isModifiedFromDefaults; // @dynamic isModifiedFromDefaults;
@property(readonly, retain, nonatomic) NSArray *orderedActiveKeys;
@property(retain, nonatomic) NSSet *activeKeys; // @dynamic activeKeys;
@property(readonly, retain, nonatomic) TPreviewOptionsGroup *group; // @dynamic group;
- (id)initWithGroup:(id)arg1;

@end

