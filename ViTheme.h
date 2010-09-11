#import <Cocoa/Cocoa.h>

// FIXME: move to a better place
#define ViSmartPairAttributeName @"ViSmartPair"
#define ViContinuationAttributeName @"ViContinuation"

@interface ViTheme : NSObject
{
	NSDictionary *theme;
	NSMutableDictionary *themeAttributes;
	NSMutableDictionary *scopeSelectorCache;
	NSDictionary *defaultSettings;
	NSColor *backgroundColor;
	NSColor *foregroundColor;
	NSColor *caretColor;
	NSColor *selectionColor;
}

- (id)initWithPath:(NSString *)aPath;
- (NSString *)name;
- (NSDictionary *)attributesForScopes:(NSArray *)scopes;
- (NSColor *)backgroundColor;
- (NSColor *)foregroundColor;
- (NSColor *)caretColor;
- (NSColor *)selectionColor;
- (NSString *)description;

@end
