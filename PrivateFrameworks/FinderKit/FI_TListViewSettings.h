//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface FI_TListViewSettings : NSObject
{
    NSMutableDictionary *_settings;
    NSMutableDictionary *_columnSettings;
}

+ (id)settingsFromExtendedSettings:(id)arg1;
+ (_Bool)useExtendedSettings:(id)arg1;
+ (id)extendedSettings:(id)arg1;
+ (id)backwardCompatibleSettings:(id)arg1;
+ (id)settingsForNode:(const struct TFENode *)arg1;
+ (id)settingsFromViewOptions:(id)arg1;
+ (id)settingsFromPList:(id)arg1;
+ (id)settingsFromBrowserSettings:(struct TListBrowserSettings *)arg1;
+ (id)defaultSettingsForNewUser;
+ (_Bool)isSnowLeopardColumn:(int)arg1;
+ (_Bool)columnIsBuiltInColumn:(int)arg1;
+ (_Bool)columnIsSpotlightAttribute:(int)arg1;
+ (id)columnDictionaryFromColumnArray:(vector_abc0d4d8 *)arg1;
+ (id)columnDictionaryForWidth:(long long)arg1 index:(long long)arg2 sortOrder:(_Bool)arg3 visibility:(_Bool)arg4;
@property(retain, nonatomic) NSMutableDictionary *columnSettings; // @synthesize columnSettings=_columnSettings;
@property(retain, nonatomic) NSMutableDictionary *settings; // @synthesize settings=_settings;
- (_Bool)isEquivalentTo:(id)arg1;
@property(nonatomic) _Bool userDidChangeSort;
@property(nonatomic) struct CGPoint scrollPosition;
- (unsigned long long)columnCount;
- (int)columnPropertyAtIndex:(unsigned long long)arg1;
- (_Bool)visibleForColumn:(int)arg1;
- (void)setVisibleForColumn:(int)arg1 visible:(_Bool)arg2;
- (_Bool)sortOrderAscendingForColumn:(int)arg1;
- (void)setSortOrderAscendingForColumn:(int)arg1 ascending:(_Bool)arg2;
- (unsigned long long)indexForColumn:(int)arg1;
- (vector_528602f5)columnPropertiesInOrder;
- (void)setColumnsOrder:(const vector_528602f5 *)arg1;
- (void)addSpotlightListViewColumn:(int)arg1;
- (unsigned long long)widthForColumn:(int)arg1;
- (void)setWidthForColumn:(int)arg1 width:(unsigned long long)arg2;
@property(nonatomic) int sortColumn;
@property(nonatomic) _Bool showIconPreview;
@property(nonatomic) _Bool calculateAllSizes;
@property(nonatomic) _Bool useRelativeDates;
@property(nonatomic) double textSize;
@property(nonatomic) double iconSize;
- (unsigned long long)checkIntegrity;
- (_Bool)checkNumberSettingForKey:(id)arg1 lowValue:(double)arg2 highValue:(double)arg3;
- (void)addBladeRunnerStatusSettingsIfNeeded:(const struct TFENode *)arg1;
- (void)addDateAddedSettingsIfNeeded;
- (void)dealloc;
- (id)initWithPList:(id)arg1;
- (id)initWithListBrowserSettings:(struct TListBrowserSettings *)arg1;

@end
