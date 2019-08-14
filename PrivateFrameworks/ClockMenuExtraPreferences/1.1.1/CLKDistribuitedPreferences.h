//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ClockMenuExtraPreferences/CLKPreferences.h>

@class NSString;

@interface CLKDistribuitedPreferences : CLKPreferences
{
    NSString *persistentDomainName;
    unsigned short atomicChangePreferencesCount;
    BOOL disablePersistentDomainDidChangeNotification;
    BOOL isPersistentDomainNameNew;
}

@property(readonly) BOOL isPersistentDomainNameNew; // @synthesize isPersistentDomainNameNew;
- (id)_extraDescription;
- (void)setFlashDateSeparators:(BOOL)arg1;
- (void)setDateFormat:(id)arg1;
- (void)setIsAnalog:(BOOL)arg1;
@property(retain, nonatomic) NSString *persistentDomainName;
- (id)preferences;
- (void)didChangePreferences;
- (void)willChangePreferences;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (void)finalize;
- (id)initWithLocale:(id)arg1 persistentDomainName:(id)arg2;
- (void)_savePreferencesAndNotify;
- (void)reloadFromPersistentDomain;
- (void)_savePreferencesToPersistentDomain;
- (void)_unregisterForPersistentDomainDidChangeNotification;
- (void)_registerForPersistentDomainDidChangeNotification;
- (void)_postPersistentDomainDidChangeNotification;
- (void)_persistentDomainDidChangeNotificationHandler:(id)arg1;

@end

