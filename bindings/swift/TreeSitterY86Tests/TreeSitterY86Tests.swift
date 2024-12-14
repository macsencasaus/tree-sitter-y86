import XCTest
import SwiftTreeSitter
import TreeSitterY86

final class TreeSitterY86Tests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_y86())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Y86 grammar")
    }
}
