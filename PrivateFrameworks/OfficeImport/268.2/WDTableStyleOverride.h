//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <OfficeImport/NSCopying-Protocol.h>

@class WDCharacterProperties, WDDocument, WDParagraphProperties, WDStyle, WDTableCellProperties, WDTableRowProperties;

@interface WDTableStyleOverride : NSObject <NSCopying>
{
    WDDocument *mDocument;
    int mPart;
    WDParagraphProperties *mParagraphProperties;
    WDCharacterProperties *mCharacterProperties;
    WDTableRowProperties *mTableRowProperties;
    WDTableCellProperties *mTableCellStyleProperties;
    unsigned int mParagraphPropertiesOverridden:1;
    unsigned int mCharacterPropertiesOverridden:1;
    unsigned int mTableRowPropertiesOverridden:1;
    unsigned int mTableCellStylePropertiesOverridden:1;
    WDStyle *mStyle;
}

@property __weak WDStyle *style; // @synthesize style=mStyle;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setTableCellStylePropertiesOverridden:(BOOL)arg1;
- (BOOL)isTableCellStylePropertiesOverridden;
- (id)mutableTableCellStyleProperties;
- (id)tableCellStyleProperties;
- (void)setTableRowPropertiesOverridden:(BOOL)arg1;
- (BOOL)isTableRowPropertiesOverridden;
- (id)mutableTableRowProperties;
- (id)tableRowProperties;
- (BOOL)isTablePropertiesOverridden;
- (id)tableProperties;
- (void)setCharacterPropertiesOverridden:(BOOL)arg1;
- (BOOL)isCharacterPropertiesOverridden;
- (id)mutableCharacterProperties;
- (id)characterProperties;
- (void)setParagraphPropertiesOverridden:(BOOL)arg1;
- (BOOL)isParagraphPropertiesOverridden;
- (id)mutableParagraphProperties;
- (id)paragraphProperties;
- (void)setPart:(int)arg1;
- (int)part;
- (id)initWithDocument:(id)arg1;

@end

