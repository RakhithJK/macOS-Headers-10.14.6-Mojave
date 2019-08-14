//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <WebKit/DOMNode.h>

@class DOMElement, DOMHTMLElement, NSArray, NSDictionary, NSString;

@interface DOMNode (MailExtras)
- (void)insertAsSiblingAfterNode:(id)arg1;
- (void)insertAsSiblingBeforeNode:(id)arg1;
- (void)convertBackgroundImageURLsUsingDictionary:(id)arg1;
- (BOOL)convertInlineStationeryBackgroundImageURL;
- (void)addInlineBackgroundImageURLToArray:(id)arg1;
- (id)findElementWithTag:(id)arg1 className:(id)arg2 andIdName:(id)arg3;
- (id)findElementWithTag:(id)arg1 andClass:(id)arg2;
- (void)_stationeryAttachmentPlaceholderNodes:(id *)arg1;
@property(readonly, copy, nonatomic) NSArray *stationeryAttachmentPlaceholderNodes;
- (void)_objectElementChildNodes:(id *)arg1;
@property(readonly, copy, nonatomic) NSArray *objectElementChildNodes;
- (void)_descendants:(id *)arg1 withClassName:(id)arg2;
- (id)descendantsWithClassName:(id)arg1;
@property(readonly, nonatomic) DOMNode *lastEditableElement;
- (void)_editableElements:(id *)arg1;
@property(readonly, copy, nonatomic) NSDictionary *editableElements;
@property(readonly, nonatomic) DOMHTMLElement *tilingDiv;
@property(readonly, copy, nonatomic) NSArray *tilingElements;
- (void)_stationeryDynamicElementNodes:(id *)arg1;
@property(readonly, copy, nonatomic) NSArray *stationeryDynamicElementNodes;
- (BOOL)convertInternalImagesToObjectsIsStationery:(BOOL)arg1 attachmentURLs:(id)arg2;
- (id)attributedStringWithDocument:(id)arg1;
- (void)fixParagraphsAndQuotesFromMicrosoft;
- (void)fixParagraphsAndQuotesFromMicrosoftNodesToRemove:(id)arg1;
- (void)recursivelyFixParagraphs;
- (void)recursivelyRemoveMailAttributes;
- (void)restoreEditableElementsEdited:(id *)arg1 unedited:(id *)arg2;
- (void)recursivelyRemoveMailAttributes:(BOOL)arg1 convertObjectsToImages:(BOOL)arg2 convertEditableElements:(BOOL)arg3 removeDefaultColorStyle:(BOOL)arg4;
- (BOOL)_isAppleStringAttachmentSpan;
- (BOOL)containsRichTextForMessageFont:(id)arg1;
@property(readonly, nonatomic) DOMHTMLElement *containingListElement;
@property(readonly, nonatomic) BOOL containsOnlySelectionMarkers;
@property(readonly, nonatomic) BOOL isInEditableRegion;
@property(readonly, nonatomic) DOMNode *topmostEditableAncestor;
@property(readonly, nonatomic) long long outlineNestingLevel;
@property(readonly, nonatomic) DOMNode *precedingListItem;
@property(readonly, nonatomic) DOMNode *containingListItem;
- (id)topmostContainingNodeWithNameInArray:(id)arg1;
- (id)firstContainingNodeWithNameInArray:(id)arg1;
- (id)descendantNamed:(id)arg1;
@property(readonly, nonatomic) DOMElement *nestedListElement;
- (BOOL)isAtEndOfContainerNode:(id)arg1;
- (BOOL)isAtBeginningOfContainerNode:(id)arg1;
- (unsigned int)offsetOfChild:(id)arg1;
- (id)commonAncestorWithNode:(id)arg1;
- (BOOL)isDescendantOfNode:(id)arg1;
@property(readonly, nonatomic) DOMNode *firstDescendantBlockQuote;
@property(readonly, nonatomic) DOMNode *highestContainingBlockQuote;
@property(readonly, nonatomic) DOMNode *containingBlockQuote;
@property(readonly, nonatomic) long long quoteLevelDelta;
@property(readonly, nonatomic) long long quoteLevel;
@property(readonly, nonatomic) BOOL hasNoSignificantContentsOtherThanAttachments;
@property(readonly, nonatomic) BOOL hasNoSignificantContentsOrWhitespace;
@property(readonly, nonatomic) BOOL hasNoSignificantContents;
- (BOOL)_hasNoSignificantContentsOrWhitespace:(BOOL)arg1 orAttachments:(BOOL)arg2;
@property(readonly, nonatomic) BOOL hasNoContents;
@property(readonly, nonatomic) BOOL isListElement;
@property(readonly, nonatomic) BOOL isBody;
@property(readonly, nonatomic) BOOL isNodeThatAffectsTyping;
@property(readonly, nonatomic) DOMElement *elementAncestor;
@property(readonly, nonatomic) DOMNode *blockNodeAncestor;
@property(readonly, nonatomic) BOOL isBlockLevelElement;
- (id)appendBlockPlaceholder;
@property(readonly, copy, nonatomic) NSString *stringValue;
- (id)_mail_traversePreviousNode;
- (id)_mail_traverseNextSiblingStayingWithin:(id)arg1;
- (id)_mail_traverseNextNodeStayingWithin:(id)arg1;
@property(readonly, nonatomic) DOMNode *previousNode;
@property(readonly, nonatomic) DOMNode *nextNode;
@property(readonly, nonatomic) DOMNode *nextSiblingOrAunt;
@property(readonly, nonatomic) BOOL _mail_isAttached;
@property(readonly, nonatomic) BOOL isTemporaryCursorMarker;
- (void)removeStrayLinefeeds;
- (void)_removeStrayLinefeedsAtBeginning;
- (void)_removeStrayLinefeedsAtEnd;
- (id)XPathRelativeTo:(id)arg1;
@end

