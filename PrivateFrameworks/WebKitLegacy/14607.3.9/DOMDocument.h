//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <WebKitLegacy/DOMNode.h>

@class DOMAbstractView, DOMDocumentType, DOMElement, DOMHTMLCollection, DOMHTMLElement, DOMImplementation, DOMStyleSheetList, NSString, WebFrame;

@interface DOMDocument : DOMNode
{
}

- (id)querySelectorAll:(id)arg1;
- (id)querySelector:(id)arg1;
- (id)getElementById:(id)arg1;
- (BOOL)hasFocus;
- (id)getElementsByClassName:(id)arg1;
- (id)getMatchedCSSRules:(id)arg1 pseudoElement:(id)arg2 authorOnly:(BOOL)arg3;
- (id)getMatchedCSSRules:(id)arg1 pseudoElement:(id)arg2;
- (id)getComputedStyle:(id)arg1 pseudoElement:(id)arg2;
- (id)createCSSStyleDeclaration;
- (id)caretRangeFromPoint:(int)arg1 y:(int)arg2;
- (id)elementFromPoint:(int)arg1 y:(int)arg2;
- (id)getElementsByName:(id)arg1;
- (id)queryCommandValue:(id)arg1;
- (BOOL)queryCommandSupported:(id)arg1;
- (BOOL)queryCommandState:(id)arg1;
- (BOOL)queryCommandIndeterm:(id)arg1;
- (BOOL)queryCommandEnabled:(id)arg1;
- (BOOL)execCommand:(id)arg1;
- (BOOL)execCommand:(id)arg1 userInterface:(BOOL)arg2;
- (BOOL)execCommand:(id)arg1 userInterface:(BOOL)arg2 value:(id)arg3;
- (id)evaluate:(id)arg1 contextNode:(id)arg2 resolver:(id)arg3 type:(unsigned short)arg4 inResult:(id)arg5;
- (id)createNSResolver:(id)arg1;
- (id)createExpression:(id)arg1 resolver:(id)arg2;
- (id)getOverrideStyle:(id)arg1 pseudoElement:(id)arg2;
- (id)createTreeWalker:(id)arg1 whatToShow:(unsigned int)arg2 filter:(id)arg3 expandEntityReferences:(BOOL)arg4;
- (id)createNodeIterator:(id)arg1 whatToShow:(unsigned int)arg2 filter:(id)arg3 expandEntityReferences:(BOOL)arg4;
- (id)createRange;
- (id)createEvent:(id)arg1;
- (id)adoptNode:(id)arg1;
- (id)getElementsByTagNameNS:(id)arg1 localName:(id)arg2;
- (id)createAttributeNS:(id)arg1 qualifiedName:(id)arg2;
- (id)createElementNS:(id)arg1 qualifiedName:(id)arg2;
- (id)importNode:(id)arg1 deep:(BOOL)arg2;
- (id)getElementsByTagName:(id)arg1;
- (id)createEntityReference:(id)arg1;
- (id)createAttribute:(id)arg1;
- (id)createProcessingInstruction:(id)arg1 data:(id)arg2;
- (id)createCDATASection:(id)arg1;
- (id)createComment:(id)arg1;
- (id)createTextNode:(id)arg1;
- (id)createDocumentFragment;
- (id)createElement:(id)arg1;
- (unsigned int)childElementCount;
- (id)lastElementChild;
- (id)firstElementChild;
- (id)children;
- (id)scrollingElement;
- (id)origin;
- (id)currentScript;
- (BOOL)hidden;
- (id)visibilityState;
- (id)compatMode;
@property(readonly) DOMElement *activeElement;
@property(copy) NSString *selectedStylesheetSet;
@property(readonly, copy) NSString *preferredStylesheetSet;
@property(readonly, copy) NSString *characterSet;
@property(readonly, copy) NSString *readyState;
@property(readonly, copy) NSString *defaultCharset;
@property(copy) NSString *charset;
@property(readonly, copy) NSString *lastModified;
@property(readonly) DOMHTMLCollection *anchors;
@property(readonly) DOMHTMLCollection *forms;
@property(readonly) DOMHTMLCollection *links;
@property(readonly) DOMHTMLCollection *applets;
@property(readonly) DOMHTMLCollection *images;
- (id)head;
@property(retain) DOMHTMLElement *body;
@property(copy) NSString *cookie;
@property(readonly, copy) NSString *URL;
@property(readonly, copy) NSString *domain;
@property(readonly, copy) NSString *referrer;
- (void)setDir:(id)arg1;
- (id)dir;
@property(copy) NSString *title;
- (id)contentType;
@property(readonly) DOMStyleSheetList *styleSheets;
@property(readonly) DOMAbstractView *defaultView;
@property(copy) NSString *documentURI;
@property BOOL xmlStandalone;
@property(copy) NSString *xmlVersion;
@property(readonly, copy) NSString *xmlEncoding;
@property(readonly, copy) NSString *inputEncoding;
@property(readonly) DOMElement *documentElement;
@property(readonly) DOMImplementation *implementation;
@property(readonly) DOMDocumentType *doctype;
- (id)getComputedStyle:(id)arg1:(id)arg2;
- (id)evaluate:(id)arg1:(id)arg2:(id)arg3:(unsigned short)arg4:(id)arg5;
- (id)createExpression:(id)arg1:(id)arg2;
- (id)getOverrideStyle:(id)arg1:(id)arg2;
- (id)createTreeWalker:(id)arg1:(unsigned int)arg2:(id)arg3:(BOOL)arg4;
- (id)createNodeIterator:(id)arg1:(unsigned int)arg2:(id)arg3:(BOOL)arg4;
- (id)getElementsByTagNameNS:(id)arg1:(id)arg2;
- (id)createAttributeNS:(id)arg1:(id)arg2;
- (id)createElementNS:(id)arg1:(id)arg2;
- (id)importNode:(id)arg1:(BOOL)arg2;
- (id)createProcessingInstruction:(id)arg1:(id)arg2;
- (id)URLWithAttributeString:(id)arg1;
@property(readonly, nonatomic) WebFrame *webFrame;
- (id)_documentRange;

@end

