//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSXMLDTDNode.h>

@class NSMutableArray, NSString;

@interface NSXMLAttributeDeclaration : NSXMLDTDNode
{
    NSString *_elementName;
    unsigned long long _defaultType;
    NSMutableArray *_enumerations;
}

- (BOOL)isEqual:(id)arg1;
- (void)_addToLibxml2TreeRepresentationWithDoc:(struct _xmlDoc *)arg1 dtd:(struct _xmlDtd *)arg2 context:(struct _xmlValidCtxt *)arg3;
- (void)_XMLStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2;
- (id)enumerations;
- (void)addEnumeration:(id)arg1;
- (unsigned long long)defaultType;
- (void)setDefaultType:(unsigned long long)arg1;
- (id)elementName;
- (void)setElementName:(id)arg1;
- (void)dealloc;

@end

