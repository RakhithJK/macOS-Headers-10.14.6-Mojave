//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface NSTouchBarLayout : NSObject
{
    double _visualCenterX;
    double _defaultItemPadding;
    double _standardCenterWidth;
    double _leadingWidgetWidth;
    BOOL _enforcesUniformHeight;
    BOOL _centerIsPrincipal;
    BOOL _allowsSingleItemClipping;
    long long _accessoryUserInterfaceLayoutDirection;
    long long _itemUserInterfaceLayoutDirection;
}

+ (id)toolbarLayoutWithVisualCenterX:(double)arg1;
+ (id)touchBarLayoutWithVisualCenterX:(double)arg1;
@property BOOL allowsSingleItemClipping; // @synthesize allowsSingleItemClipping=_allowsSingleItemClipping;
@property(getter=isCenterPrincipal) BOOL centerIsPrincipal; // @synthesize centerIsPrincipal=_centerIsPrincipal;
@property double standardCenterWidth; // @synthesize standardCenterWidth=_standardCenterWidth;
@property long long itemUserInterfaceLayoutDirection; // @synthesize itemUserInterfaceLayoutDirection=_itemUserInterfaceLayoutDirection;
@property long long accessoryUserInterfaceLayoutDirection; // @synthesize accessoryUserInterfaceLayoutDirection=_accessoryUserInterfaceLayoutDirection;
@property BOOL enforcesUniformHeight; // @synthesize enforcesUniformHeight=_enforcesUniformHeight;
@property double defaultItemPadding; // @synthesize defaultItemPadding=_defaultItemPadding;
@property double visualCenterX; // @synthesize visualCenterX=_visualCenterX;
- (void)_calculateLayoutOfItems:(id)arg1 withAvailableSize:(struct CGSize)arg2 startingWidth:(double)arg3 xOrigin:(double)arg4 sharesLeftEdge:(BOOL)arg5 sharesRightEdge:(BOOL)arg6 accountsForWidgetSpace:(BOOL)arg7 itemsToFrames:(id)arg8;
- (void)_divideAndCalculateLayoutOfItems:(id)arg1 withAvailableSize:(struct CGSize)arg2 startingWidth:(double)arg3 xOrigin:(double)arg4 sharesLeftEdge:(BOOL)arg5 sharesRightEdge:(BOOL)arg6 accountsForWidgetSpace:(BOOL)arg7 itemsToFrames:(id)arg8;
- (double)_adjustedHeightForItem:(id)arg1 availableHeight:(double)arg2;
- (id)_orderedItemsGivenUnorderedArray:(id)arg1 usingOrderedArray:(id)arg2;
- (double)_contentClippingWidthOfItems:(id)arg1 sharesLeftEdge:(BOOL)arg2 sharesRightEdge:(BOOL)arg3;
- (double)_maxWidthOfItems:(id)arg1 sharesLeftEdge:(BOOL)arg2 sharesRightEdge:(BOOL)arg3 containsFlexibleSpaceItems:(char *)arg4;
- (double)_minWidthOfItems:(id)arg1 sharesLeftEdge:(BOOL)arg2 sharesRightEdge:(BOOL)arg3;
- (double)_aggregateWidthOfItems:(id)arg1 sharesLeftEdge:(BOOL)arg2 sharesRightEdge:(BOOL)arg3 widthMeasurement:(CDUnknownBlockType)arg4;
- (id)_prioritizedItems:(id)arg1;
- (struct CGRect)_centerRectGivenItems:(id)arg1 remainingLeftWidth:(double)arg2 remainingRightWidth:(double)arg3 sharesLeftEdge:(BOOL)arg4 sharesRightEdge:(BOOL)arg5;
- (struct CGRect)_centerRectGivenItems:(id)arg1 leftItems:(id)arg2 rightItems:(id)arg3 totalWidth:(double)arg4 xOrigin:(double)arg5;
- (void)_adjustForItemUserInterfaceLayoutDirection:(id)arg1 itemsToAttributes:(id)arg2 availableWidth:(double)arg3 xOrigin:(double)arg4;
- (void)_touchUpSpacesInItems:(id)arg1 itemsToAttributes:(id)arg2;
- (double)_rightInsetOfItems:(id)arg1 sharesRightEdge:(BOOL)arg2;
- (double)_leftInsetOfItems:(id)arg1 sharesLeftEdge:(BOOL)arg2;
- (void)items:(id)arg1 centerItems:(id)arg2 minSize:(struct CGSize *)arg3 maxSize:(struct CGSize *)arg4;
- (id)_calculateLayoutOfItems:(id)arg1 centerItems:(id)arg2 givenSize:(struct CGSize)arg3 originX:(double)arg4;
- (id)_attributesOfItems:(id)arg1 centerItems:(id)arg2 givenSize:(struct CGSize)arg3 sharesLeftEdge:(BOOL)arg4 sharesRightEdge:(BOOL)arg5 xOrigin:(double)arg6;
- (id)attributesOfItems:(id)arg1 centerItems:(id)arg2 givenSize:(struct CGSize)arg3;
@property double leadingWidgetWidth;
- (id)init;
- (id)initWithVisualCenterX:(double)arg1;

@end

