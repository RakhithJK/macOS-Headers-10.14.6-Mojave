//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SpotlightServices/PRSCardSection.h>

@class NSArray;

@interface PRSTrailersCardSection : PRSCardSection
{
    NSArray *_trailers;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) NSArray *trailers; // @synthesize trailers=_trailers;
- (void).cxx_destruct;
- (long long)type;
- (id)initWithSFSearchResult:(id)arg1 cardSection:(id)arg2;
- (id)initWithTitle:(id)arg1 trailers:(id)arg2;

@end

