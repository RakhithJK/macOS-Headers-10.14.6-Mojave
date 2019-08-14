//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "CPDefinitionNode.h"

@class EQEquation, NSMutableDictionary;

@interface CPDefinitionEquation : CPDefinitionNode
{
    EQEquation *mEquation;
    EQEquation *mDisplayedEquation;
    NSMutableDictionary *mSyntaxErrors;
    NSMutableDictionary *mUpdates;
    NSMutableDictionary *mLastDefinitionInfos;
}

+ (id)definitionWithEquation:(id)arg1;
- (BOOL)insertItems:(id)arg1 atChildIndex:(long long)arg2;
- (BOOL)canInsertItems:(id)arg1 atChildIndex:(long long)arg2;
- (BOOL)canBeDragged;
- (BOOL)shouldDelete;
- (id)activeState;
- (id)objects;
- (BOOL)couldBeUsing:(id)arg1;
- (BOOL)isUsing:(id)arg1;
- (id)definitions;
- (BOOL)setEquation:(id)arg1;
- (void)currentViewDidChange;
- (void)update;
- (void)renameFunction:(id)arg1 to:(id)arg2;
- (id)equationFromString:(id)arg1;
- (id)displayedEquation;
- (id)equation;
- (BOOL)evaluateEquation:(id)arg1;
- (void)updateDisplayedEquation;
- (id)stringFromResultValue:(id)arg1;
- (id)stringFromValue:(struct _NComplex)arg1;
- (void)refresh:(id)arg1;
- (id)contextForScanner;
- (BOOL)validCustomDefinition:(id)arg1;
- (BOOL)setFunction:(id)arg1;
- (BOOL)setGraph:(id)arg1;
- (void)removeFromParent;
- (BOOL)removeDefinition;
- (void)setNewDefinition:(id)arg1;
- (void)setLastDefinitionInfo:(id)arg1;
- (id)lastDefinitionInfo;
- (void)setSyntaxError:(id)arg1;
- (id)syntaxError;
- (id)childItems;
- (void)dealloc;
- (id)initWithEquation:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)awake;
- (void)definitionDidChange:(id)arg1;
- (void)increaseDerivationByOrder:(long long)arg1;
- (void)setNewExpression:(id)arg1;
- (BOOL)canIncreaseDerivationByOrder:(long long)arg1;
- (id)derivationInfoDictionary;
- (void)stripRange:(struct _NSRange *)arg1 inString:(id)arg2;

@end

