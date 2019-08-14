//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FrontBoardServices/BSDescriptionProviding-Protocol.h>
#import <FrontBoardServices/BSXPCCoding-Protocol.h>
#import <FrontBoardServices/NSCopying-Protocol.h>
#import <FrontBoardServices/NSSecureCoding-Protocol.h>

@class CADisplay, FBSDisplayIdentity, FBSDisplayMode, NSSet, NSString;

@interface FBSDisplayConfiguration : NSObject <BSDescriptionProviding, BSXPCCoding, NSCopying, NSSecureCoding>
{
    FBSDisplayIdentity *_identity;
    NSString *_hardwareIdentifier;
    NSString *_name;
    NSString *_deviceName;
    unsigned int _noEqual_seed;
    BOOL _noEqual_comparable;
    int _pid;
    long long _tags;
    FBSDisplayMode *_currentMode;
    FBSDisplayMode *_preferredMode;
    NSSet *_otherModes;
    NSSet *_availableModes;
    BOOL _cloningSupported;
    BOOL _overscanned;
    long long _overscanCompensation;
    struct CGSize _overscanAmounts;
    struct CGSize _pixelSize;
    struct CGRect _bounds;
    struct CGPoint _renderingCenter;
    CADisplay *_caDisplay;
    struct CGSize _safeOverscanRatio;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) long long tags; // @synthesize tags=_tags;
@property(readonly, nonatomic) unsigned int seed; // @synthesize seed=_noEqual_seed;
@property(readonly, nonatomic) struct CGPoint renderingCenter; // @synthesize renderingCenter=_renderingCenter;
@property(readonly, nonatomic) struct CGRect bounds; // @synthesize bounds=_bounds;
@property(readonly, nonatomic) struct CGSize pixelSize; // @synthesize pixelSize=_pixelSize;
@property(readonly, nonatomic) struct CGSize safeOverscanRatio; // @synthesize safeOverscanRatio=_safeOverscanRatio;
@property(readonly, nonatomic) long long overscanCompensation; // @synthesize overscanCompensation=_overscanCompensation;
@property(readonly, nonatomic, getter=isOverscanned) BOOL overscanned; // @synthesize overscanned=_overscanned;
@property(readonly, nonatomic, getter=isCloningSupported) BOOL cloningSupported; // @synthesize cloningSupported=_cloningSupported;
@property(readonly, copy, nonatomic) NSSet *availableModes; // @synthesize availableModes=_availableModes;
@property(readonly, copy, nonatomic) FBSDisplayMode *currentMode; // @synthesize currentMode=_currentMode;
@property(readonly, copy, nonatomic) NSString *deviceName; // @synthesize deviceName=_deviceName;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy, nonatomic) NSString *hardwareIdentifier; // @synthesize hardwareIdentifier=_hardwareIdentifier;
@property(readonly, copy, nonatomic) FBSDisplayIdentity *identity; // @synthesize identity=_identity;
- (void).cxx_destruct;
- (double)orientation;
- (unsigned int)displayID;
- (BOOL)supportsExtendedColor;
- (BOOL)isConnected;
- (struct CGPoint)nativeCenter;
- (struct CGRect)referenceBounds;
- (id)caDisplay;
- (id)uniqueID;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)wantsConnectionDebouncing;
- (BOOL)isHiddenDisplay;
- (id)copyForSecureRendering;
- (id)laterConfiguration:(id)arg1;
- (id)CADisplay;
- (long long)_nativeRotation;
- (id)_nameForDisplayType;
- (id)copyWithOverrideMode:(id)arg1;
- (id)copyWithUniqueIdentifier:(id)arg1;
- (BOOL)expectsSecureRendering;
- (id)uniqueIdentifier;
- (long long)type;
@property(readonly, nonatomic) long long colorGamut;
@property(readonly, nonatomic) double refreshRate;
@property(readonly, nonatomic) double scale;
@property(readonly, nonatomic) double nativeOrientation;
@property(readonly, copy, nonatomic) FBSDisplayMode *preferredMode;
@property(readonly, nonatomic, getter=isCarInstrumentsDisplay) BOOL carInstrumentsDisplay;
@property(readonly, nonatomic, getter=isCarDisplay) BOOL carDisplay;
@property(readonly, nonatomic, getter=isExternal) BOOL external;
@property(readonly, nonatomic, getter=isMainDisplay) BOOL mainDisplay;
- (id)_initWithIdentity:(id)arg1 hardwareIdentifier:(id)arg2 name:(id)arg3 deviceName:(id)arg4 seed:(unsigned int)arg5 comparable:(BOOL)arg6 tags:(long long)arg7 currentMode:(id)arg8 preferredMode:(id)arg9 otherModes:(id)arg10 cloningSupported:(BOOL)arg11 overscanned:(BOOL)arg12 overscanCompensation:(long long)arg13 safeOverscanRatio:(struct CGSize)arg14 pixelSize:(struct CGSize)arg15 bounds:(struct CGRect)arg16 renderingCenter:(struct CGPoint)arg17 validityCheck:(long long)arg18;
- (id)_initWithImmutableDisplay:(id)arg1 originalDisplay:(id)arg2 assertIfInvalid:(BOOL)arg3;
- (id)initWithCADisplay:(id)arg1 isMainDisplay:(BOOL)arg2;
- (id)initWithCADisplay:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

