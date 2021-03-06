//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXLayouter-Protocol.h>

@class NSString, SXContainerComponentBlueprint, SXLayouterFactory;
@protocol SXColumnCalculator, SXLayouterDelegate, SXUnitConverterFactory;

@interface SXCollectionLayouter : NSObject <SXLayouter>
{
    id <SXLayouterDelegate> _delegate;
    SXLayouterFactory *_layouterFactory;
    SXContainerComponentBlueprint *_containerComponentBlueprint;
    id <SXColumnCalculator> _columnCalculator;
    id <SXUnitConverterFactory> _unitConverterFactory;
}

@property(readonly, nonatomic) id <SXUnitConverterFactory> unitConverterFactory; // @synthesize unitConverterFactory=_unitConverterFactory;
@property(readonly, nonatomic) id <SXColumnCalculator> columnCalculator; // @synthesize columnCalculator=_columnCalculator;
@property(readonly, nonatomic) SXContainerComponentBlueprint *containerComponentBlueprint; // @synthesize containerComponentBlueprint=_containerComponentBlueprint;
@property(readonly, nonatomic) SXLayouterFactory *layouterFactory; // @synthesize layouterFactory=_layouterFactory;
@property(nonatomic) __weak id <SXLayouterDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)childColumnLayoutForRowLayout:(id)arg1 display:(id)arg2 collectionContainerBlueprint:(id)arg3 childContainerComponentBlueprint:(id)arg4 documentColumnLayout:(id)arg5 unitConverter:(id)arg6;
- (void)layoutBlueprint:(id)arg1 columnLayout:(id)arg2 shouldContinue:(char *)arg3;
- (id)initWithContainerComponent:(id)arg1 layouterFactory:(id)arg2 columnCalculator:(id)arg3 unitConverterFactory:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

