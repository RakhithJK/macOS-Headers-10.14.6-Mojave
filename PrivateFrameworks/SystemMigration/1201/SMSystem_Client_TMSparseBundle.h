//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SystemMigration/SMSystem_Client.h>

@interface SMSystem_Client_TMSparseBundle : SMSystem_Client
{
    BOOL encryptedBundle;
    long long foundSystems;
}

+ (id)keyPathsForValuesAffectingDisplayState;
+ (id)guiMonitorKeys;
+ (id)guiInterestedKeys;
@property(readonly) long long foundSystems; // @synthesize foundSystems;
@property(readonly) BOOL encryptedBundle; // @synthesize encryptedBundle;
- (void)pressedActionButton:(id)arg1;
- (BOOL)isMounted;
- (id)displayState;
- (id)availableActionLabel;
- (id)displayName;
- (long long)defaultUIRank;

@end

