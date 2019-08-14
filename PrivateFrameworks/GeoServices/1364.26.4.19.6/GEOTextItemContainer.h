//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOTextItemContainer-Protocol.h>

@class NSArray;
@protocol GEOTextItemDisplayConfig;

@interface GEOTextItemContainer : NSObject <GEOTextItemContainer>
{
    id <GEOTextItemDisplayConfig> _displayConfig;
    NSArray *_textItems;
}

@property(readonly, nonatomic) NSArray *textItems; // @synthesize textItems=_textItems;
@property(readonly, nonatomic) id <GEOTextItemDisplayConfig> displayConfig; // @synthesize displayConfig=_displayConfig;
- (void).cxx_destruct;
- (id)initWithTextItemContainer:(id)arg1;
- (id)initWithDisplayConfig:(id)arg1 textItems:(id)arg2;

@end

