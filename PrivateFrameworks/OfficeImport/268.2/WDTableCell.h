//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, WDTableCellProperties, WDTableRow, WDText;

@interface WDTableCell : NSObject
{
    unsigned long long mIndex;
    WDTableCellProperties *mProperties;
    WDText *mText;
    NSString *mIdentifier;
    BOOL mUseTrackedProperties;
    WDTableRow *mRow;
}

@property(readonly) __weak WDTableRow *row; // @synthesize row=mRow;
- (void).cxx_destruct;
- (id)description;
- (void)setIdentifier:(id)arg1;
- (id)identifier;
- (id)text;
- (void)clearProperties;
- (id)properties;
- (long long)compareIndex:(id)arg1;
- (unsigned long long)index;
- (void)setUseTrackedProperties:(BOOL)arg1;
- (BOOL)useTrackedProperties;
- (id)initWithRow:(id)arg1 at:(unsigned long long)arg2;

@end

