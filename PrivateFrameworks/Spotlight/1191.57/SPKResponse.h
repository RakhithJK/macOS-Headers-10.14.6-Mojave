//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSError, NSString, PRSRankingConfiguration;

@interface SPKResponse : NSObject
{
    BOOL _topHitIsIn;
    BOOL _noChangeInResultsSinceLastResponse;
    BOOL _parsecFinished;
    BOOL _metadataFinished;
    BOOL _isRewrite;
    int _kind;
    PRSRankingConfiguration *_rankingConfiguration;
    unsigned long long _queryId;
    NSError *_error;
    NSArray *_results;
    NSDictionary *_groupedResults;
    NSString *_fbq;
    NSString *_userQueryString;
    NSString *_correctedQuery;
    NSArray *_suggestions;
    NSArray *_added;
    NSArray *_changed;
    NSArray *_removed;
}

@property(readonly) NSArray *removed; // @synthesize removed=_removed;
@property(readonly) NSArray *changed; // @synthesize changed=_changed;
@property(readonly) NSArray *added; // @synthesize added=_added;
@property(retain) NSArray *suggestions; // @synthesize suggestions=_suggestions;
@property(retain) NSString *correctedQuery; // @synthesize correctedQuery=_correctedQuery;
@property BOOL isRewrite; // @synthesize isRewrite=_isRewrite;
@property(retain) NSString *userQueryString; // @synthesize userQueryString=_userQueryString;
@property(retain) NSString *fbq; // @synthesize fbq=_fbq;
@property BOOL metadataFinished; // @synthesize metadataFinished=_metadataFinished;
@property BOOL parsecFinished; // @synthesize parsecFinished=_parsecFinished;
@property BOOL noChangeInResultsSinceLastResponse; // @synthesize noChangeInResultsSinceLastResponse=_noChangeInResultsSinceLastResponse;
@property BOOL topHitIsIn; // @synthesize topHitIsIn=_topHitIsIn;
@property(readonly) NSDictionary *groupedResults; // @synthesize groupedResults=_groupedResults;
@property(readonly) NSArray *results; // @synthesize results=_results;
@property(readonly) NSError *error; // @synthesize error=_error;
@property(readonly) unsigned long long queryId; // @synthesize queryId=_queryId;
@property(readonly) int kind; // @synthesize kind=_kind;
@property(retain) PRSRankingConfiguration *rankingConfiguration; // @synthesize rankingConfiguration=_rankingConfiguration;
- (void).cxx_destruct;
- (id)description;
- (id)initWithQueryID:(unsigned long long)arg1 error:(id)arg2;
- (id)initWithQueryID:(unsigned long long)arg1 results:(id)arg2;
- (id)initWithQueryID:(unsigned long long)arg1 kind:(int)arg2 results:(id)arg3;
- (id)initWithQueryID:(unsigned long long)arg1 kind:(int)arg2 results:(id)arg3 groupedResults:(id)arg4;
- (id)initWithQueryID:(unsigned long long)arg1 kind:(int)arg2 results:(id)arg3 groupedResults:(id)arg4 error:(id)arg5;

@end

