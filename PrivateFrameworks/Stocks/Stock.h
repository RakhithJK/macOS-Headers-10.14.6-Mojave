//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class Exchange, NSString, NSURL, StockChartData, StockDataSource;

@interface Stock : NSObject
{
    StockChartData *_chartDataArray[9];
    BOOL _transient;
    unsigned int _pricePrecision;
    NSString *_symbol;
    NSString *_companyName;
    NSString *_shortCompanyName;
    Exchange *_exchange;
    NSString *_price;
    NSString *_change;
    NSString *_currency;
    NSString *_symbolType;
    NSString *_open;
    NSString *_high;
    NSString *_low;
    NSString *_yearHigh;
    NSString *_yearLow;
    NSString *_volume;
    NSString *_averageVolume;
    NSString *_marketcap;
    NSString *_peRatio;
    NSString *_dividendYield;
    NSURL *_infoURL;
    StockDataSource *_dataSource;
    double _timeQuoteLastUpdated;
    double _timeMetadataLastUpdated;
}

+ (id)_potentiallyAbsentKeys;
+ (id)listNameOverridesBySymbol;
+ (id)localizedMagnitudeAbbreviatedStringWithString:(id)arg1;
+ (id)localizedMagnitudeAbbreviatedStringWithString:(id)arg1 fractionDigits:(unsigned int)arg2;
+ (id)postfixCharacterForMagnitude:(unsigned int)arg1 unitMagnitude:(unsigned int *)arg2;
+ (id)BlankValueString;
+ (id)symbolForURL:(id)arg1;
+ (id)urlForStock:(id)arg1;
+ (id)urlForStockSymbol:(id)arg1;
@property(nonatomic, getter=isTransient) BOOL transient; // @synthesize transient=_transient;
@property(nonatomic) double timeMetadataLastUpdated; // @synthesize timeMetadataLastUpdated=_timeMetadataLastUpdated;
@property(nonatomic) double timeQuoteLastUpdated; // @synthesize timeQuoteLastUpdated=_timeQuoteLastUpdated;
@property(retain, nonatomic) StockDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) NSURL *infoURL; // @synthesize infoURL=_infoURL;
@property(readonly, nonatomic) unsigned int pricePrecision; // @synthesize pricePrecision=_pricePrecision;
@property(retain, nonatomic) NSString *dividendYield; // @synthesize dividendYield=_dividendYield;
@property(retain, nonatomic) NSString *peRatio; // @synthesize peRatio=_peRatio;
@property(retain, nonatomic) NSString *marketcap; // @synthesize marketcap=_marketcap;
@property(retain, nonatomic) NSString *averageVolume; // @synthesize averageVolume=_averageVolume;
@property(retain, nonatomic) NSString *volume; // @synthesize volume=_volume;
@property(retain, nonatomic) NSString *yearLow; // @synthesize yearLow=_yearLow;
@property(retain, nonatomic) NSString *yearHigh; // @synthesize yearHigh=_yearHigh;
@property(retain, nonatomic) NSString *low; // @synthesize low=_low;
@property(retain, nonatomic) NSString *high; // @synthesize high=_high;
@property(retain, nonatomic) NSString *open; // @synthesize open=_open;
@property(retain, nonatomic) NSString *symbolType; // @synthesize symbolType=_symbolType;
@property(retain, nonatomic) NSString *currency; // @synthesize currency=_currency;
@property(retain, nonatomic) NSString *change; // @synthesize change=_change;
@property(retain, nonatomic) NSString *price; // @synthesize price=_price;
@property(retain, nonatomic) Exchange *exchange; // @synthesize exchange=_exchange;
@property(retain, nonatomic) NSString *shortCompanyName; // @synthesize shortCompanyName=_shortCompanyName;
@property(retain, nonatomic) NSString *companyName; // @synthesize companyName=_companyName;
@property(retain, nonatomic) NSString *symbol; // @synthesize symbol=_symbol;
- (void).cxx_destruct;
- (id)formattedPriceDroppingFractionDigitsIfLengthExceeds:(unsigned long long)arg1;
- (id)formattedChangePercent:(BOOL)arg1;
@property(readonly, nonatomic) NSString *formattedChangePercent;
@property(readonly, nonatomic) NSString *formattedChange;
@property(readonly, nonatomic) NSString *formattedPrice;
@property(readonly, nonatomic) NSString *marketStatusDescription;
- (void)_updatePricePrecision;
- (void)updateMetadataWithDictionary:(id)arg1 forTime:(double)arg2;
- (void)updateQuoteWithDictionary:(id)arg1 forTime:(double)arg2;
- (void)setChartData:(id)arg1 forInterval:(long long)arg2;
- (id)chartDataForInterval:(long long)arg1;
- (BOOL)shouldUseCompanyNameAsListName:(unsigned long long)arg1;
- (id)listNameOverride;
- (id)listNameWithMaxIndexNameLength:(unsigned long long)arg1;
- (id)listName;
- (BOOL)doesMetadataNeedUpdate;
- (BOOL)doesQuoteNeedUpdate;
- (BOOL)isMetadataStale;
- (BOOL)isQuoteStale;
- (double)_updateInterval;
- (BOOL)marketIsOpen;
- (BOOL)isIndex;
- (BOOL)changeIsZero;
- (BOOL)changeIsNegative;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)archiveDictionary;
- (void)dealloc;
- (id)initWithDictionary:(id)arg1;
- (void)populateFromDictionary:(id)arg1;
- (id)description;

@end

