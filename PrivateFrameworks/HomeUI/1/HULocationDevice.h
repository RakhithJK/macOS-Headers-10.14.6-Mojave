//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeUI/NAIdentifiable-Protocol.h>

@class NSString;

@interface HULocationDevice : NSObject <NAIdentifiable>
{
    BOOL _currentDevice;
    NSString *_identifier;
    NSString *_name;
}

+ (id)na_identity;
@property(readonly, nonatomic, getter=isCurrentDevice) BOOL currentDevice; // @synthesize currentDevice=_currentDevice;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 currentDevice:(BOOL)arg3;
- (id)initWithFMFDevice:(id)arg1;
- (id)initWithHMDevice:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

