//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <TSReading/EQKitMathMLNode.h>

#import <TSReading/EQKitMathMLNode-Protocol.h>

@interface EQKitMathMLMAction : EQKitMathMLNode <EQKitMathMLNode>
{
    EQKitMathMLNode *mExpression;
}

- (id)operatorCore;
- (_Bool)isEmbellishedOperator;
- (struct Schemata)layoutSchemata;
- (const set_25e6ba53 *)mathMLAttributes;
- (void)dealloc;
- (id)initFromXMLNode:(struct _xmlNode *)arg1 parser:(id)arg2;

@end

