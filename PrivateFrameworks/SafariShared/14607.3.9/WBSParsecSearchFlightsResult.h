//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SafariShared/WBSParsecLegacySearchResult.h>

#import <SafariShared/WBSParsecSearchFlightsResult-Protocol.h>

@class SFFlight, WBSParsecFlightFetcher;

@interface WBSParsecSearchFlightsResult : WBSParsecLegacySearchResult <WBSParsecSearchFlightsResult>
{
    WBSParsecFlightFetcher *_flightFetcher;
}

+ (id)_specializedSchema;
- (void).cxx_destruct;
- (void)getFlight:(id *)arg1 selectedLegIndex:(unsigned long long *)arg2;
@property unsigned long long selectedLegIndex;
@property(readonly) SFFlight *sfFlight;
- (void)setSfSearchResultValue:(id)arg1;

@end

