//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <TelephonyUtilities/TUMetadataCacheDataProvider.h>

@interface TUCallDirectoryMetadataCacheDataProvider : TUMetadataCacheDataProvider
{
    CDUnknownBlockType _countryDialingCode;
    CDUnknownBlockType _firstIdentificationEntriesForEnabledExtensions;
}

@property(copy, nonatomic) CDUnknownBlockType firstIdentificationEntriesForEnabledExtensions; // @synthesize firstIdentificationEntriesForEnabledExtensions=_firstIdentificationEntriesForEnabledExtensions;
@property(copy, nonatomic) CDUnknownBlockType countryDialingCode; // @synthesize countryDialingCode=_countryDialingCode;
- (void).cxx_destruct;
- (void)updateCacheWithDestinationIDs:(id)arg1 withGroup:(id)arg2;
- (void)dealloc;
- (id)init;

@end

