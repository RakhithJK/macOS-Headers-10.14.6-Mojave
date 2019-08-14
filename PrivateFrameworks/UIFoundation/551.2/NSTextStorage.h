//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSMutableAttributedString.h>

@class NSArray, NSMutableArray;
@protocol NSTextStorageDelegate;

@interface NSTextStorage : NSMutableAttributedString
{
    struct _NSRange _editedRange;
    long long _editedDelta;
    struct {
        unsigned int editedMask:8;
        unsigned int postWillProcess:1;
        unsigned int postDidProcess:1;
        unsigned int :6;
        unsigned int disabled:16;
        unsigned int :32;
    } _flags;
    NSMutableArray *_layoutManagers;
    id _sideData;
}

+ (BOOL)supportsSecureCoding;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (void)_fontSetChanged:(id)arg1;
- (BOOL)_usesSimpleTextEffects;
- (void)_setUsesSimpleTextEffects:(BOOL)arg1;
- (id)cuiStyleEffects;
- (id)cuiCatalog;
- (BOOL)_shouldSetOriginalFontAttribute;
@property __weak id <NSTextStorageDelegate> delegate;
- (void)fontSetChanged;
- (void)_notifyEdited:(unsigned long long)arg1 range:(struct _NSRange)arg2 changeInLength:(long long)arg3 invalidatedRange:(struct _NSRange)arg4;
@property(readonly) BOOL fixesAttributesLazily;
- (void)ensureAttributesAreFixedInRange:(struct _NSRange)arg1;
- (void)invalidateAttributesInRange:(struct _NSRange)arg1;
- (void)_setAttributeFixingInProgress:(BOOL)arg1;
- (BOOL)_attributeFixingInProgress;
- (struct _NSRange)_rangeByEstimatingAttributeFixingForRange:(struct _NSRange)arg1;
- (void)processEditing;
- (void)edited:(unsigned long long)arg1 range:(struct _NSRange)arg2 changeInLength:(long long)arg3;
@property(readonly) long long changeInLength;
- (void)setEditedMask:(unsigned long long)arg1;
@property(readonly) unsigned long long editedMask;
@property(readonly) struct _NSRange editedRange;
- (BOOL)_isEditing;
- (void)coordinateEditing:(CDUnknownBlockType)arg1;
- (void)endEditing;
- (void)beginEditing;
- (BOOL)_forceFixAttributes;
- (void)_setForceFixAttributes:(BOOL)arg1;
- (void)coordinateReading:(CDUnknownBlockType)arg1;
- (void)_unlock;
- (BOOL)_lockForWritingWithExceptionHandler:(BOOL)arg1;
- (BOOL)_lockForWriting;
- (BOOL)_lockForReading;
@property(readonly, copy) NSArray *layoutManagers;
- (void)removeLayoutManager:(id)arg1;
- (void)addLayoutManager:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (Class)classForCoder;
- (void)finalize;
- (void)dealloc;
- (id)init;
- (void)coordinateAccess:(CDUnknownBlockType)arg1;

@end

