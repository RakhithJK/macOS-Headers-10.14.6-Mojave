//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Automator/NSCopying-Protocol.h>

@class AMAction, AMActionConnector, NSDictionary, NSPredicate, NSString;

@interface AMConnectionPoint : NSObject <NSCopying>
{
    AMActionConnector *_connector;
    AMActionConnector *_runtimeConnector;
    NSString *_typeDisplayName;
    NSString *_utiType;
    AMAction *_action;
    NSPredicate *_predicate;
    NSDictionary *_runtimeTypeDictionary;
    BOOL _isInputPoint;
}

+ (id)outputConnectionPointWithAction:(id)arg1;
+ (id)inputConnectionPointWithAction:(id)arg1;
@property(retain) AMActionConnector *_runtimeConnector; // @synthesize _runtimeConnector;
@property(retain) NSDictionary *runtimeTypeDictionary; // @synthesize runtimeTypeDictionary=_runtimeTypeDictionary;
@property(copy, nonatomic) NSString *typeDisplayName; // @synthesize typeDisplayName=_typeDisplayName;
@property(retain) NSPredicate *predicate; // @synthesize predicate=_predicate;
@property(nonatomic) __weak AMAction *action; // @synthesize action=_action;
@property __weak AMActionConnector *connector; // @synthesize connector=_connector;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isValid) BOOL valid;
- (id)description;
- (void)resetToDefaultOnMainThread;
- (void)resetToDefault;
- (void)generateUTITypes;
@property(readonly, nonatomic) NSDictionary *typeDictionary;
@property(retain, nonatomic) NSString *UTIType;
@property(retain, nonatomic) AMActionConnector *runtimeConnector;
@property(readonly, nonatomic) NSString *UUID;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithAction:(id)arg1 isInput:(BOOL)arg2;

@end

