//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol WeatherPreferencesPersistence;

@interface WeatherInternalPreferences : NSObject
{
    id <WeatherPreferencesPersistence> _persistence;
}

+ (id)sharedInternalPreferences;
@property(retain) id <WeatherPreferencesPersistence> persistence; // @synthesize persistence=_persistence;
- (void).cxx_destruct;
- (id)objectForKey:(id)arg1;
@property(readonly) BOOL isInternalInstall;

@end

