//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface FBASharedConstants : NSObject
{
}

+ (BOOL)currentIDMSEnvironmentMatchesCurrentFBAEnvironment;
+ (long long)currentLegalVersion;
+ (id)developerURL;
+ (id)publicPortalURL;
+ (id)seedPortalURL;
+ (id)publicBetaURL;
+ (id)appleSeedURL;
+ (id)appleSeedURLFromDefaults:(id)arg1 withEnvironment:(short)arg2;
+ (short)environment;
+ (long long)platform;
+ (id)modelName;
+ (id)productVersion;
+ (id)swTrain;
+ (id)swVers;
+ (void)_deriveSystemVersion;
+ (void)initialize;

@end

