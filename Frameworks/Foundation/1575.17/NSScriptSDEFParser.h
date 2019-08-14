//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Foundation/NSXMLParserDelegate-Protocol.h>

@class NSArray, NSBundle, NSData, NSDictionary, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface NSScriptSDEFParser : NSObject <NSXMLParserDelegate>
{
    NSData *_data;
    NSBundle *_bundle;
    NSDictionary *_descriptionCreationMethodsByElementName;
    NSDictionary *_validSubelementNamesPerArrayElementName;
    NSMutableArray *_elementsBeingParsed;
    NSArray *_suiteDescriptions;
    BOOL _parsesCocoaElements;
}

- (void)parser:(id)arg1 parseErrorOccurred:(id)arg2;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (id)suiteDescriptions;
- (id)_createValueTypeDescriptionFromElement:(id)arg1;
- (id)_createTypeDescriptionFromElement:(id)arg1;
- (id)_createToOneRelationshipDescriptionFromElement:(id)arg1;
- (id)_createToManyRelationshipDescriptionFromElement:(id)arg1;
- (id)_createSuiteDescriptionArrayFromDictionaryElement:(id)arg1;
- (id)_createSynonymDescriptionFromElement:(id)arg1;
- (id)_createSuiteDescriptionFromElement:(id)arg1;
- (id)_createResultDescriptionFromElement:(id)arg1;
- (id)_createRespondsToDescriptionFromElement:(id)arg1;
- (id)_createRecordTypeDescriptionFromElement:(id)arg1;
- (id)_createPropertyDescriptionFromElement:(id)arg1;
- (id)_createEnumeratorDescriptionFromElement:(id)arg1;
- (id)_createEnumerationDescriptionFromElement:(id)arg1;
- (id)_createAccessGroupDescriptionFromElement:(id)arg1;
- (id)_createCommandDescriptionFromElement:(id)arg1;
- (id)_createCocoaDescriptionFromElement:(id)arg1;
- (id)_createClassExtensionDescriptionFromElement:(id)arg1;
- (id)_createClassDescriptionFromElement:(id)arg1;
- (id)_createArgumentDescriptionFromElement:(id)arg1;
- (id)_currentSuiteName;
- (id)_typeNameFromElement:(id)arg1 isOptional:(BOOL)arg2;
- (id)_methodSelectorFromElement:(id)arg1 withName:(id)arg2;
- (id)_classNameFromElement:(id)arg1 withName:(id)arg2;
- (id)_argumentKeyFromElement:(id)arg1 withName:(id)arg2;
- (id)_propertyKeyFromElement:(id)arg1 withName:(id)arg2;
- (id)_implementationAttribute:(id)arg1 fromElement:(id)arg2 withName:(id)arg3 capitalizing:(BOOL)arg4;
- (unsigned long long)_propertyAccessFromElement:(id)arg1;
- (unsigned long long)_accessValueForAttributeKey:(id)arg1 fromElement:(id)arg2;
- (BOOL)_booleanValueForAttributeKey:(id)arg1 fromElement:(id)arg2;
- (BOOL)_booleanValueForCocoaAttributeKey:(id)arg1 fromElement:(id)arg2;
- (id)_valueForRequiredCocoaAttributeKey:(id)arg1 fromElement:(id)arg2;
- (id)_valueForOptionalCocoaAttributeKey:(id)arg1 fromElement:(id)arg2;
- (void)setParsesCocoaElements:(BOOL)arg1;
- (void)setBundle:(id)arg1;
- (void)dealloc;
- (id)initWithDataNoCopy:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

