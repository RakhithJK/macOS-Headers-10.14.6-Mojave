//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Silex/NSObject-Protocol.h>

@protocol SXEdgeSpacing;

@protocol SXConditionalComponentLayoutProperties <NSObject>
@property(readonly, nonatomic) struct _SXConvertibleValue maximumWidth;
@property(readonly, nonatomic) struct _SXConvertibleValue minimumWidth;
@property(readonly, nonatomic) id <SXEdgeSpacing> padding;
@property(readonly, nonatomic) unsigned long long horizontalContentAlignment;
@property(readonly, nonatomic) struct _SXConvertibleValue maximumContentWidth;
@property(readonly, nonatomic) struct _SXConvertibleValue suggestedHeight;
@property(readonly, nonatomic) struct _SXConvertibleValue minimumHeight;
@property(readonly, nonatomic) struct _SXComponentContentInset contentInset;
@property(readonly, nonatomic) id <SXEdgeSpacing> margin;
@property(readonly, nonatomic) unsigned long long ignoreDocumentGutter;
@property(readonly, nonatomic) unsigned long long ignoreDocumentMargin;
@property(readonly, nonatomic) struct _NSRange columnRange;
@end

